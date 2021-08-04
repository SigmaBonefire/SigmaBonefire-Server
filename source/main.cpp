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
    std::cout << "Sigma" << std::endl;
}