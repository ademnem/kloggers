
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdio.h>


int main( int argc, char* argv[] ) { // expecting server IP argv[1]

    WSAData wsaDATA;

    int iResult;

    // 1. INITIALIZE WINSOCK
    iResult = WSAStartup(MAKEWORD(2,2), &wsaData);
    if (iResult != 0) {
        printf("WSAStartup failed, %d\n", iResult);
        return 1;
    }
    /* 
    WSAStartup initiates use fo WS2_32.dll
        - MAKEWORD(2,2): requests verison 2.2 of Winsock on system
    */


    // 2. CREATING A SOCKET FOR THE CLIENT
    struct addrinfo *result = nullptr,
                    *ptr = nullptr,
                    hints;
    ZeroMemory( &hints, sizeof(hints) );
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_protocol = IPPROTO_TCP;
    
    #define DEFAULT_PORT "27015"

    // request IP address for server name on command line 
    iResult = getaddrinfo(argv[1], DEFAULT_PORT, &hints, &result);
    if (iResult != 0) {
        printf("getaddrinfo failed: %d\n", iResult);
        WSACleanup();
        return 0;
    }
    
    SOCKET ConnectSocket = INVALID_SOCKET; 

    ptr = result;
    ConnectSocket = socket(ptr->ai_family, ptr->ai_socktype, ptr->ai_protocol);

    if (ConnectSocket == INVALID_SOCKET) {
        printf("Error at socket(): %1d\n", WSAGetLastError());
        freeaddrinfo(result);
        WSACleanup();
        return 1;
    }


    // 3. CONNECTING TO A SOCKET
    iResult = connect( ConnectSocket, ptr->ai_addr, (int)ptr->ai_addrlen);
    if (iResult == SOCKET_ERROR) {
        closesocket(ConnectSocket);
        ConnectSocket = INVALID_SOCKET;
    }

    // Should really try the next address returned by getaddrinfo
    // if the connect call failed
    // But for this simple example we just free the resources
    // returned by getaddrinfo and print an error message
    // WHAT DOES THIS MEAN???

    freeaddrinfo(result);

    if (ConnectSocket == INVALID_SOCKET) {
        printf("Unable to connect to server!\n");
        WSACleanup();
        return 1;
    }

    return 0;    
}
