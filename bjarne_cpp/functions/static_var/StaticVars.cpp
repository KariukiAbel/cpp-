#include <iostream>
using namespace std;
void f(int a){
	while(a--){
		static int n=0;		//initialized once
		int x=0;			//initialized 'a' times in each call of f()

		cout<<"n == "<<n++<<", x jo== "<<x++<<'\n';
	}
}

int main(){
	f(3);
}