#include <iostream>


struct Node
{
	int data;
	Node* link;
};

int main(){
	Node* A=NULL;  //
	Node* B=(Node*)malloc(sizeof(Node));
	Node* temp=new Node();
	// Node* temp1=new Node();
	temp->data=4;
	temp->link=B;

	A=temp;
	
	B->data=10;
	B->link=NULL;
	// temp1->data=10;
	// temp1->link=A;
	// B=temp1;
	std::cout<<"Node A's data="<<A->data<<std::endl;
	std::cout<<"Node B's data="<<B->data<<std::endl;


}
	
