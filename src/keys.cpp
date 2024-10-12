#include "keys.hpp"

std::string get_key_name( int ascii_num ) {

    char ascii_char = ascii_num;
    std::string ascii_string; 

    switch( ascii_num ) {
        case VK_LBUTTON:
            ascii_string = "LEFT MOUSE BUTTON";
            break;

        case VK_RBUTTON: 
            ascii_string = "RIGHT MOUSE BUTTON";
            break;

        case VK_MBUTTON:
            ascii_string = "MIDDLE MOUSE BUTTON";
            break;

        case VK_BACK:
            ascii_string = "BACKSPACE";
            break;

        case VK_TAB:
            ascii_string = "TAB";
            break;

        case VK_CLEAR:
            ascii_string = "CLEAR";
            break;

        case VK_RETURN:
            ascii_string = "ENTER";
            break;
        
        /*
        case VK_SHIFT: // do left and right SHIFT instead
            ascii_string = "SHIFT";
            break;

        case VK_CONTROL: // do left and right CTRL instead
            ascii_string = "CONTROL";
            break;
 
        case VK_MENU: // do left and right ALT instead
            ascii_string = "ALT";
            break;
        */

        case VK_CAPITAL:
            ascii_string = "CAPSLOCK";
            break;

        case VK_ESCAPE:
            ascii_string = "ESC";
            break;
        
        case VK_SPACE:
            ascii_string = "SPACEBAR";
            break;

        case VK_PRIOR:
            ascii_string = "PAGEUP";
            break;
            
        case VK_NEXT:
            ascii_string = "PAGEDOWN";
            break;

        case VK_END:
            ascii_string = "END";
            break;

        case VK_HOME:
            ascii_string = "HOME";
            break;

        case VK_LEFT:
            ascii_string = "LEFTARROW";
            break;

        case VK_UP:
            ascii_string = "UPARROW";
            break;

        case VK_RIGHT:
            ascii_string = "RIGHTARROW";
            break;

        case VK_DOWN:
            ascii_string = "DOWNARROW";
            break;

        case VK_INSERT:
            ascii_string = "INSERT";
            break;

        case VK_DELETE:
            ascii_string = "DELETE";
            break;

        case VK_NUMPAD0:
            ascii_string = "NUMPAD0";
            break;

        case VK_NUMPAD1:
            ascii_string = "NUMPAD1";
            break;

        case VK_NUMPAD2:
            ascii_string = "NUMPAD2";
            break;

        case VK_NUMPAD3:
            ascii_string = "NUMPAD3";
            break;

        case VK_NUMPAD4:
            ascii_string = "NUMPAD4";
            break;

        case VK_NUMPAD5:
            ascii_string = "NUMPAD5";
            break;

        case VK_NUMPAD6:
            ascii_string = "NUMPAD6";
            break;

        case VK_NUMPAD7:
            ascii_string = "NUMPAD7";
            break;

        case VK_NUMPAD8:
            ascii_string = "NUMPAD8";
            break;

        case VK_NUMPAD9:
            ascii_string = "NUMPAD9";
            break;

        case VK_MULTIPLY:
            ascii_string = "MULTIPLY";
            break;

        case VK_ADD:
            ascii_string = "ADD";
            break;

        case VK_SUBTRACT:
            ascii_string = "SUBTRACT";
            break;

        case VK_DECIMAL:
            ascii_string = "DECIMAL";
            break;

        case VK_DIVIDE:
            ascii_string = "DIVIDE";
            break;
  
        case VK_F1:
            ascii_string = "F1";
            break;

        case VK_F2:
            ascii_string = "F2";
            break;

        case VK_F3:
            ascii_string = "F3";
            break;

        case VK_F4:
            ascii_string = "F4";
            break;

        case VK_F5:
            ascii_string = "F5";
            break;

        case VK_F6:
            ascii_string = "F6";
            break;

        case VK_F7:
            ascii_string = "F7";
            break;

        case VK_F8:
            ascii_string = "F8";
            break;

        case VK_F9:
            ascii_string = "F9";
            break;

        case VK_F10:
            ascii_string = "F10";
            break;

        case VK_F11:
            ascii_string = "F11";
            break;

        case VK_F12:
            ascii_string = "F12";
            break;

        case VK_NUMLOCK:
            ascii_string = "NUMLOCK";
            break;

        case VK_LSHIFT:
            ascii_string = "LSHIFT";
            break;
        
        case VK_RSHIFT:
            ascii_string = "RSHIFT";
            break;

        case VK_LCONTROL: 
            ascii_string = "LCONTROL";
            break;

        case VK_RCONTROL: 
            ascii_string = "RCONTROL";
            break;
 
        case VK_LMENU: 
            ascii_string = "LALT";
            break;

        case VK_RMENU: 
            ascii_string = "RALT";
            break;

        // DO KEYS WITH SHIFT
        // SHIFTDOWN + KEY (may instead of taking SHIFT as a state I should do a second argument that tells me whether shift is down or not)

        default:
            ascii_string = std::string(1, ascii_char);
    }

    return ascii_string; 
}
