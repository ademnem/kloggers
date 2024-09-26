#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    while( true ) {
        if( GetAsyncKeyState() & 0x8000 ) {
            cout << "a key was pressed" << endl; 
        } 
    } 

    return 0;
}


