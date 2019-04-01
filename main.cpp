#include <stdlib.h>
#include <iostream>
#include <string>

int main(){
  std::cout << "start playing audio";
  system("omxplayer /home/pi/Audio-RPI/dog-bark1.wav");
  std::cout << "done playing";
}
