#include <Poco/Net/TCPServer.h>
#include <Poco/Net/TCPServerParams.h>
#include <Poco/Net/TCPServerConnectionFactory.h>
#include <Poco/Net/StreamSocket.h>
#include <Poco/Net/SocketStream.h>
#include <Poco/Thread.h>
#include <iostream>
#include <algorithm>

using Poco::Net::TCPServer;
using Poco::Net::TCPServerConnectionFactory;
using Poco::Net::TCPServerConnection;
using Poco::Net::StreamSocket;
using Poco::Net::SocketStream;

class StringReverseConnection : public TCPServerConnection
{
public:
    StringReverseConnection(const StreamSocket& socket) : TCPServerConnection(socket) {}

    void run()
    {
        SocketStream stream(socket());
        stream << "Welcome to POCO TCP server. Enter your string (max 255 characters):\n";
        stream.flush();

        std::string input;
        std::getline(stream, input);

        if (input.size() > 255)
        {
            stream << "Input exceeds the maximum limit of 255 characters." << std::endl;
            return;
        }

        std::reverse(input.begin(), input.end());

        stream << input << std::endl;
    }
};

class StringReverseConnectionFactory : public TCPServerConnectionFactory
{
public:
    TCPServerConnection* createConnection(const StreamSocket& socket) override
    {
        return new StringReverseConnection(socket);
    }
};

int main()
{
    Poco::Net::TCPServerParams* pParams = new Poco::Net::TCPServerParams();
    pParams->setMaxThreads(4);

    TCPServer server(new StringReverseConnectionFactory(), 28888, pParams);
    server.start();

    while (true)
    {
        Poco::Thread::sleep(1000);
    }

    // The following code will never execute, as the server runs indefinitely
    server.stop();
    return 0;
}
