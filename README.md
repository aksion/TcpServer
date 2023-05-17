# TCP Server
This an simple example of using POCO Libraries, gcc compiler and C++ language.
If you send string to the server you will receive answer with reverse string and after this connection will be closed.
Server works on 28888 port.

## Install in MacOS
### Install POCO Library
brew install poco

### Install GCC compiler
brew install gcc

## Install in Ubuntu Server
### Install POCO Library
sudo apt-get install libpoco-dev

### Install GCC compiler
sudo apt-get install gcc

## Compile and Run
### Compile source code:
make -f makefile

### Make your file executable:
sudo chmod +x ./tcp_server

### Run server:
./tcp_server

## Test TCP Server
### Test tcp connection with Local Machine:
telnet 127.0.0.1 28888

### Test tcp connection with Demo Server:
telnet aksion.me 28888
