//Linked list: inserting a node at the beginning
#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};
struct Node* head; //global variable, can be accessed anywhere

void insert(int x){
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=head;
	head=temp;
	
	// if (head!=NULL) {
	// 	temp->next=head;
	// }
	// head=temp;
	
}
void Print(){
	 struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	 temp=head;
	 printf("Our linked list is [ ");
	 while(temp!=NULL){
	 	printf("%d ",temp->data);
	 	temp=temp->next;
	 }
	 printf("]\n");
}
int main()
{
	head=NULL; //empty list 
	printf("How many numbers\n");
	int n,i,x;

	scanf("%d",&n);
	
	for(i = 0; i < n; i++)
	{
		printf("Enter the number \n");
		scanf("%d",&x);
		insert(x);
		Print();
	}
	

	return 0;
}
