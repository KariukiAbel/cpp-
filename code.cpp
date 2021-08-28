#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  string line;
  string temp = "";
  std::cout << "Enter a string" << '\n';
  getline(cin,line);

for (int i = 0; i < line.size(); ++i) {
  if ((line[i] >='a' && line[i] <='z') || (line[i] >='A' && line[i] <='Z')) {
    temp = temp +line[i];
  }
}

line = temp;
cout<<"Output String: " << line;
  return 0;
}
