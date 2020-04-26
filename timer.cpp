#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

int hours = 0;
int minutes = 0;
int seconds = 0;

//function to display timer
void displayClock(/* arguments */) {
  /* code */
  //system call to clear the screen
  system("clear");
  std::cout << setfill(' ') << setw(55);
  std::cout <<"     Timer     \n";
  std::cout << setfill(' ') << setw(55) ;
  std::cout <<" __________________\n";
  std::cout << setfill(' ') << setw(29);
  std::cout << " | " << setfill('0') << setw(2) << hours << " hrs | ";
  std::cout << setfill('0') << setw(2) << minutes << " min | ";
  std::cout << setfill('0') << setw(2) << seconds << " sec | " << endl;
  std::cout << setfill(' ') << setw(55) << " ---------------------------\n";
}

void timer(/* arguments */) {
  /* code */
  while (true) {
    /* code */
    //display the timer
    displayClock();

    //sleep system call to sleep for 1 second
    sleep(1);

     //increment seconds
     seconds++;

     if (seconds == 60) {
       /* code */
       minutes++;
       if (minutes == 60) {
         /* code */
         hours++;
         minutes = 0;
       }
       seconds = 0;
       }
     }
  }

int main(int argc, char const *argv[]) {
  /* code */
  timer();
  return 0;
}
