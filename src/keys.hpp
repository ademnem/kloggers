#ifndef KEYS_HPP
#define KEYS_HPP

#include <string>
#include <windows.h>

std::string get_key_name( const int& ascii_num, const bool& shift, const bool& ctrl, const bool& capslock, const bool& numlock );

#endif 
