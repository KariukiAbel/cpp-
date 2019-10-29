#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> scores(10); // 100 integer scores
	vector<char> buffer(10);//buffer 500 characters
	int i=0;
	cout<<scores[i];  //index range unchecked
	buffer.at(i)=buffer.at(2*i); //index (range checked);
	vector<int> newScores=scores; //copy scores to newscores
	scores.resize(scores.size()+10);

}