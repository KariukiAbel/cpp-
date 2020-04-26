#include<iostream>
using namespace::std;
int main()
{
int counter=1;

while (counter<=10){

int counter2=1;

while (counter2<counter){

cout<<"|";

counter2=counter2+1;

}



cout<<"|"<<"\n";

counter=counter+1;

}

return 0;
}
