#include <iostream>
struct Node
{
	int data;
	Node* link;
};

int main(){
	Node* A=NULL;

	Node* temp=new Node();
	Node* B=new Node();
	temp->data=10;
	temp->link=B;
	A=temp;

	
	B->data=20;
	B->link=NULL;

	Node* temp1=A;
	while(temp1!=NULL){
		std::cout<<temp1->data<<std::endl;
		temp1=temp1->link;
	}
}