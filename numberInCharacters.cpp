#include <iostream>

int main(int argc, char const *argv[]) {
  int number,divnum;
  std::cout << "Enter number" << '\n';
  std::cin >> number;
  while (number > 0) {
    /* code */
    divnum = number % 10;
    switch (divnum) {
      case 1:
      std::cout << "one" << '\n';
      break;
      case 2:
      std::cout << "Two" << '\n';
      break;
      case 3:
      std::cout << "Three" << '\n';
      break;
      case 4:
      std::cout << "Four" << '\n';
      break;
      case 5:
      std::cout << "Five" << '\n';
      break;
      case 6:
      std::cout << "Six" << '\n';
      break;
      case 7:
      std::cout << "Seven" << '\n';
      break;
      case 8:
      std::cout << "Eight" << '\n';
      break;
      case 9:
      std::cout << "Nine" << '\n';
      break;
      case 0:
      std::cout << "Zero" << '\n';
      break;
    }
    number/=10;
  }
  return 0;
}
