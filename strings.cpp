#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    char v;
    cin>>a;
    cin>>b;
    int len = a.size();
    int l=b.size();
    string c=a+b;
    v=b[0];
    b[0]=a[0];
a[0]=v;
cout<<len<<" "<<l<<"\n";
cout<<c<<"\n";
cout<<a<<" "<<b<<"\n";
    return 0;
}