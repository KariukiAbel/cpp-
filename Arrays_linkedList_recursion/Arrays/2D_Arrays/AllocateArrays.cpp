#include <iostream>

int main(){

	int n=3;
	int** M=new int*[n]

	for (int i = 0; i < n; ++i)
	{
		M[i]=new int[m]; 	// allocate the i-th row
	}

	// deallocation

	for (int i = 0; i < n; ++i)
		delete[] M[i];	// delete the i-th row
	delete[] M;			// delete the array of row pointers
}