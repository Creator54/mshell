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

void repl(){
  start();
  flag=0;
  getline(std::cin,keypress);

  //switches cant be used for strings ;(
  if (keypress=="help") system("less help");
  else if (keypress=="clr") system("clear");
  else if (keypress=="exit") exit;
  else system(keypress.c_str()); //https://stackoverflow.com/questions/30691299/variables-in-system-call-c
  repl();
}

int main(){
  repl();
}
