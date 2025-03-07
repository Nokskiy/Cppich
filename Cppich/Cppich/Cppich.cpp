#include <iostream>
#include "Cppich.h"

int main()
{
    consoleColor colors[] = {White,Red,Blue,Black,Green,Cyan,Yellow};
    std::string a = "hello world";
    for (int i = 0; i < std::size(a); i++)
    {
        setColor(Red);
        print(a[i]);
    }
    std::cout << "\n";

    std::string d = cin(Blue);
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << d;
}