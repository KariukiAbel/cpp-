#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int reverse = 0, number, mod;
  
  std::cout << "Enter number you would wish to reverse" << '\n';
  std::cin >> number;

while (number != 0) {
  mod = number % 10;
  reverse = reverse*10+ mod;
  number = number / 10;
}

 std::cout << "The reversed number is " << reverse<<'\n';
  return 0;
}
