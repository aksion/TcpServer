# TCP Server
This an simple example of using POCO Libraries, gcc compiler and C++ language.
If you send string to the server you will receive answer with reverse string and after this connection will be closed.
Server works on 28888 port.

## Install in MacOS
### Install POCO Library
```console
brew install poco
```

### Install GCC compiler
```console
brew install gcc
```

## Install in Ubuntu Server
### Install POCO Library
```console
sudo apt-get install libpoco-dev
```

### Install GCC compiler
```console
sudo apt-get install gcc
```

```console
sudo apt-get install g++
```

## Compile and Run
### Compile source code:
```console
make -f makefile
```

### Make your file executable:
```console
sudo chmod +x ./tcp_server
```

## Run server:
### Run server for tests:
```console
./tcp_server
```

### Run server forever:
```console
./tcp_server &
```

## Test TCP Server
### Test tcp connection with Local Machine:
```console
telnet 127.0.0.1 28888
```

### Test tcp connection with Demo Server:
```console
telnet aksion.me 28888
```

# Example of TCP Server work
## Example 1
### Input
```console
racecar
```
### Output
```console
racecar
```

## Example 2
### Input
```console
Hello World!
```
### Output
```console
!dlroW olleH
```

## Example 3
### Input
```console
abcdefg
```
### Output
```console
gfedcba
```

## Example 4
### Input
```console
12345b
```
### Output
```console
b54321
```
