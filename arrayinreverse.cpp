#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    int  size [n]; 
  
    for(int i=0;i< n;i++){
        cin>>size[i];
    }
   for (int j=n-1;j>=0;j--){
       cout<<size[j]<<" ";
   }
    return 0;

}