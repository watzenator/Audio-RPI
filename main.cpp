#include <stdlib.h>
#include <iostream>
#include <string>

int main(){
  std::cout << "start playing audio";
  std::string cwd = getcwd();
  std::cout << cwd;
  //system("omxplayer $HOME/");
  std::cout << "done playing";
}
