#include "keys.hpp"

std::string get_key_name( int ascii_num ) {

    char ascii_char = ascii_num;
    std::string ascii_string( 1, ascii_char );
    return ascii_string; 

}
