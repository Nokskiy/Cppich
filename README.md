# Cppich
Сross-platform library for working with terminal/console
# How to use
First you need to connect the library.
```
#include "Cppich.h"
```
In order to write text in the console, you can write code.
```
print("your text\n",Red);
```
let's enter the value through "cin"
```
cin("your color");
```
Final code
```
#include <iostream>
#include "Cppich.h"
int main()
{
    print("Hellow blood\n",Red);
    cin(Blue);
}
```

That's it, cross-platform text coloring is ready.
