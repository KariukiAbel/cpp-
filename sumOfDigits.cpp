#include <iostream>

int main(int argc, char const *argv[]) {
  int number, sum = 0;
  std::cout << "Enter number to get sum of the diigts" << '\n';
  std::cin >> number;

  while (number != 0) {
    /* code */
    int lastDigit = number % 10;
    sum += lastDigit;
    number /= 10;
  }

  std::cout << "The sum of the diigts is " << sum<< '\n';

  return 0;
}
