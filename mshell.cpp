#include<iostream>
#include <unistd.h>
#define in(a) std::cin>>a
#define out(a) printf(a)
#define cout(a) std::cout<<a

int flag = 1;
std::string keypress;
void start(){
  if(flag){
    system("clear");
    out("Welcome to MSHELL. Use help\n");
  }
  out("$ ");
}

void help(){
  system("clear");
  out("MSHELL v1.0 by @Creator54");
  out("\nUsage:");
  out("\n\thelp \t\thelp menu");
  out("\n\tclr  \t\tclears the screen");
  out("\n\nThis Project is licensed under GPL-3.0\n");
}

void repl(){
  start();
  flag=0;
  getline(std::cin,keypress);

  //switches cant be used for strings ;(
  if (keypress=="help") help();
  else if (keypress=="clr") system("clear");
  else if (keypress=="exit") exit;
  else system(keypress.c_str()); //https://stackoverflow.com/questions/30691299/variables-in-system-call-c
  repl();
}

int main(){
  repl();
}
