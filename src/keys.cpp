#include "keys.hpp"


#define VK_ZERO 0x30
#define VK_ONE 0x31
#define VK_TWO 0x32
#define VK_THREE 0x33
#define VK_FOUR 0x34
#define VK_FIVE 0x35
#define VK_SIX 0x36
#define VK_SEVEN 0x37
#define VK_EIGHT 0x38
#define VK_NINE 0x39  


std::string get_key_name( const int& ascii_num, const bool& shift, const bool& ctrl, const bool& capslock, const bool& numlock ) {

    std::string ascii_string = ""; 
    
    
    if( ctrl && (ascii_num != VK_CONTROL) && (ascii_num != VK_LCONTROL) && (ascii_num != VK_RCONTROL) )
        ascii_string += "CTRL + ";


    switch( ascii_num ) {

        case VK_CONTROL:
            break; 

        case VK_RCONTROL:
            ascii_string += "RCTRL";
            break;

        case VK_LCONTROL:
            ascii_string += "LCTRL";
            break;
            
        case VK_SHIFT: 
            break;

        case VK_RSHIFT:
            ascii_string += "RSHIFT";
            break;

        case VK_LSHIFT:
            ascii_string += "LSHIFT";
            break;

        case VK_LBUTTON:
            ascii_string += "LEFT MOUSE BUTTON";
            break;

        case VK_RBUTTON: 
            ascii_string += "RIGHT MOUSE BUTTON";
            break;

        case VK_MBUTTON:
            ascii_string += "MIDDLE MOUSE BUTTON";
            break;

        case VK_BACK:
            ascii_string += "BACKSPACE";
            break;

        case VK_TAB:
            ascii_string += "TAB";
            break;

        case VK_CLEAR:
            ascii_string += "CLEAR";
            break;

        case VK_RETURN:
            ascii_string += "ENTER";
            break;        

        case VK_CAPITAL:
            ascii_string += "CAPSLOCK";
            break;

        case VK_ESCAPE:
            ascii_string += "ESC";
            break;
        
        case VK_SPACE:
            ascii_string += "SPACEBAR";
            break;

        case VK_PRIOR:
            ascii_string += "PAGEUP";
            break;
            
        case VK_NEXT:
            ascii_string += "PAGEDOWN";
            break;

        case VK_END:
            ascii_string += "END";
            break;

        case VK_HOME:
            ascii_string += "HOME";
            break;

        case VK_LEFT:
            ascii_string += "LEFTARROW";
            break;

        case VK_UP:
            ascii_string += "UPARROW";
            break;

        case VK_RIGHT:
            ascii_string += "RIGHTARROW";
            break;

        case VK_DOWN:
            ascii_string += "DOWNARROW";
            break;

        case VK_INSERT:
            ascii_string += "INSERT";
            break;

        case VK_DELETE:
            ascii_string += "DELETE";
            break;

        case VK_NUMPAD0:
            ascii_string += numlock ? "NUMPAD_0" : "NUMPAD_INSERT";
            break;

        case VK_NUMPAD1:
            ascii_string += numlock ? "NUMPAD_1" : "NUMPAD_END";
            break;

        case VK_NUMPAD2:
            ascii_string += numlock ? "NUMPAD_2" : "NUMPAD_DOWN";
            break;

        case VK_NUMPAD3:
            ascii_string += numlock ? "NUMPAD_3" : "NUMPAD_PGDWN";
            break;

        case VK_NUMPAD4:
            ascii_string += numlock ? "NUMPAD_4" : "NUMPAD_LEFT";
            break;

        case VK_NUMPAD5:
            ascii_string += numlock ? "NUMPAD_5" : "NUMPAD_NOTHING";
            break;

        case VK_NUMPAD6:
            ascii_string += numlock ? "NUMPAD_6" : "NUMPAD_RIGHT";
            break;

        case VK_NUMPAD7:
            ascii_string += numlock ? "NUMPAD_7" : "NUMPAD_HOME";
            break;

        case VK_NUMPAD8:
            ascii_string += numlock ? "NUMPAD_8" : "NUMPAD_UP";
            break;

        case VK_NUMPAD9:
            ascii_string += numlock ? "NUMPAD_9" : "NUMPAD_PGUP";
            break;

        case VK_MULTIPLY:
            ascii_string += "NUMPAD_*";
            break;

        case VK_ADD:
            ascii_string += "NUMPAD_+";
            break;

        case VK_SUBTRACT:
            ascii_string += "NUMPAD_-";
            break;

        case VK_DECIMAL:
            ascii_string += numlock ? "NUMLOCK_." : "NUMLOCK_DEL";
            break;

        case VK_DIVIDE:
            ascii_string += "NUMPAD_/";
            break;

        case VK_NUMLOCK:
            ascii_string += "NUMLOCK";
            break; 
        
        case VK_ZERO:
            ascii_string += shift ^ capslock ? ")" : "0";
            break;

        case VK_ONE:
            ascii_string += shift ^ capslock ? "!" : "1";
            break;

        case VK_TWO:
            ascii_string += shift ^ capslock ? "@" : "2";
            break;

        case VK_THREE:
            ascii_string += shift ^ capslock ? "#" : "3";
            break;

        case VK_FOUR:
            ascii_string += shift ^ capslock ? "$" : "4";
            break;

        case VK_FIVE:
            ascii_string += shift ^ capslock ? "%" : "5";
            break;

        case VK_SIX:
            ascii_string += shift ^ capslock ? "^" : "6";
            break;

        case VK_SEVEN:  
            ascii_string += shift ^ capslock ? "&" : "7";
            break;

        case VK_EIGHT:
            ascii_string += shift ^ capslock ? "*" : "8";
            break;

        case VK_NINE:
            ascii_string += shift ^ capslock ? "(" : "9";
            break;

        // need to add remaining special characters
        case VK_OEM_1:
            ascii_string += shift ^ capslock ? ":" : ";";
            break;

        case VK_OEM_PLUS:
            ascii_string += shift ^ capslock ? "+" : "=";
            break;

        case VK_OEM_COMMA:
            ascii_string += shift ^ capslock ? "<" : ",";
            break;

        case VK_OEM_MINUS:
            ascii_string += shift ^ capslock ? "_" : "-";
            break;
        
        case VK_OEM_PERIOD:
            ascii_string += shift ^ capslock ? ">" : ".";
            break;

        case VK_OEM_2:
            ascii_string += shift ^ capslock ? "?" : "/";
            break;
        
        case VK_OEM_3:
            ascii_string += shift ^ capslock ? "~" : "`";
            break;

        case VK_OEM_4:
            ascii_string += shift ^ capslock ? "{" : "[";
            break;

        case VK_OEM_5:
            ascii_string += shift ^ capslock ? "|" : "\\";
            break;     

        case VK_OEM_6:
            ascii_string += shift ^ capslock ? "}" : "]";
            break;
 
        case VK_OEM_7:
            ascii_string += shift ^ capslock ? "\"" : "\'";
            break;

        default:  
            char ascii_char = shift ^ capslock ? ascii_num : ascii_num + 32;
            ascii_string += std::string(1, ascii_char);
    }

    return ascii_string; 
}
