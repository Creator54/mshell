#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <string>

int flag = 1;
std::string keypress;

void start()
{
    if (flag)
    {
        system("clear");
        std::cout << "Welcome to MSHELL. Use help\n";
    }
    std::cout << "$ ";
}

void repl()
{
    start();
    flag = 0;
    std::getline(std::cin, keypress);

    //switches cant be used for strings ;(
    if (keypress == "help")
        system("less help");
    else if (keypress == "clr")
        system("clear");
    else if (keypress == "exit")
        exit(0);
    else
        system(keypress.c_str()); //https://stackoverflow.com/questions/30691299/variables-in-system-call-c
    repl();
}

int main()
{
    repl();
    return 0;
}

