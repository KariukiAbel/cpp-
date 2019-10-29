#include <iostream>

void insertionSort(int* A, int n){ // sort an array of n characters
	for (int i = 1; i < n; i++)
	{
		char cur=A[i];			// current character to insert
		int j=i-1;				// start a previous character
		while((j>=0) && (A[j]>cur)){  // while A[j] is out of order
			A[j+1]=A[j];		// move A[j] right
			j--;				// decrement j
		}
		A[j+1]=cur;				// this is the proper place for cur
	}
}
int main(){
	int A[]={5,3,6,2,4};
	int x=5;
	insertionSort(A,x);
	for(int i:A)
		std::cout<<i<<" ";
}
