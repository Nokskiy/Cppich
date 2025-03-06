#pragma once
#include <iostream>
#include <string>
#ifdef _WIN32
#include <windows.h>

enum consoleColor 
{
    Black,
    Blue,
    Green,
    Cyan,
    Red,
    Magenta,
    Yellow,
    White
};
#else
#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
enum consoleColor
{
    Black,
    Blue,
    Green,
    Cyan,
    Red,
    Magenta,
    Yellow,
    White
};
#endif

#ifdef _WIN32
template <typename T>
void print(T text,consoleColor col = White)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, col);
    std::cout << text;
}
#else
template <typename T>
void print(T text, consoleColor col = White)
{
    switch (col)
    {
    case Black:
        std::cout << BLACK << text;
        break;
    case Blue:
        std::cout << BLUE << text;
        break;
    case Green:
        std::cout << GREEN << text;
        break;
    case Cyan:
        std::cout << CYAN << text;
        break;
    case Red:
        std::cout << RED << text;
        break;
    case Magenta:
        std::cout << MAGENTA << text;
        break;
    case Yellow:
        std::cout << YELLOW << text;
        break;
    case White:
        std::cout << WHITE << text;
        break;
    default:
        break;
    }
}
#endif