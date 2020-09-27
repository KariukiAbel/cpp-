#include <iostream>

int main(int argc, char const *argv[]) {

int number, arrayLength = 10, numarr[arrayLength];
std::cout << "Enter number you wish to convert to binary" << '\n';
std::cin >> number;

for (int i = 0; number>0; i++) {
  /* code */
  numarr[i] = number % 2;
  number /= 2;
}

for (int j= j-1; j>=0; j--) {
  /* code */
  std::cout << numarr[j];
}
  return 0;
}
