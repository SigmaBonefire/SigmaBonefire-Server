#include <winsock2.h>
#include <ws2tcpip.h>
#include <iphlpapi.h>
#include <iostream>

int main()
{
    WSADATA wsaData;
    
    int iResult;

    // initializing winsock.
    iResult = WSAStartup(MAKEWORD(2,2), &wsaData);
    if (iResult != 0)
        std::cout << "WSAStartup failed: " << iResult << std::endl;
    
    struct addrinfo *result = NULL,
                *ptr = NULL,
                hints;

    ZeroMemory( &hints, sizeof(hints) );
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_protocol = IPPROTO_TCP;