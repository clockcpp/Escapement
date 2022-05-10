// Escapement.cpp : This file contains "main" function, The .text is here :/
//

#include <iostream>

#include "escapement.h"

using namespace std;

int main(int argc, char *argv[])
{
    esc::chcp(ESC_CHCP_UNICODE);
    puts("This is LIPSUM!");
    esc::outputWF(".\\Lipsum.texX",0,-1);
    pause();
    clearConsole();
    puts("This is original file:\n\n");
    esc::outputNF(".\\test.texX", 0, -1);
    pause();
    clearConsole();
    esc::outputWF(".\\test.texX", 0, -1);
    pause();
    puts("Change the color of the console!");
    esc::setConsoleColor(ESC_CONSOLE_COLOR_BLACK, ESC_CONSOLE_COLOR_WHITE);
    pause();
    puts("Thank you and have fun!(Press ESC to exit)");
    while (1)
    {
        if (esc::keyDown(KEY_ESC))
        {
            break;
        }
        esc::setConsoleColor(ESC_CONSOLE_COLOR_RANDOM, ESC_CONSOLE_COLOR_RANDOM);
        Sleep(100);
    }
    HWND hwnd = esc::getConsoleHWND();
    esc::msgboxS(hwnd, "The end!", "Escapement");
    return 0;
}
