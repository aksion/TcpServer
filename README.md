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
sudo apt-get install g++

## Compile and Run
### Compile source code:
make -f makefile

### Make your file executable:
sudo chmod +x ./tcp_server

## Run server:
### Run server for tests:
./tcp_server
### Run server forever:
./tcp_server &

## Test TCP Server
### Test tcp connection with Local Machine:
telnet 127.0.0.1 28888

### Test tcp connection with Demo Server:
telnet aksion.me 28888

## Example of TCP Server work
### Example 1
Input:  racecar
Output: racecar
### Example 2
Input:  Hello World!
Output: !dlroW olleH
### Example 3
Input:  abcdefg
Output: gfedcba
### Example 4
Input:  12345b
Output: b54321
