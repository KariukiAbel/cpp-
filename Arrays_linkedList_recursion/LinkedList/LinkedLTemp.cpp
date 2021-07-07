#include <iostream>
#include <string>

using namespace std;

template <typename E>
class SNode{
private:
	E elem;								// linked list element value
	SNode<E>* next;						// next item in the list 
	friend class SLinkedList<E>;		//provide SLinkedList access
};

template <typename E>
class SLinkedList{
public:
	SLinkedList();
	~SLinkedList();
	bool empty() const;				// check if it is empty
	const E& front() const;			// return front element
	void addFront(const E& e);		// add to front of the list 
	void remoceFront();				// remove front item
private:
	SNode<E>* head;			// head of the list
};

template <typename E>
SLinkedList<E>::SLinkedList():head(NULL){}		// constructor

template <typename E>
bool SLinkedList<E>::empty() const{
	return head==NULL;
}
 
template<typename E>
const E& SLinkedList<E>::front() const
{return head->elem;}

template <typename E> 
SLinkedList<E>::~SLinkedList(){
	while(!empty())remoceFront();
}

template <typename E>
void SLinkedList<E>::addFront(const E& e){
	SNode<E>* v=new SNode<E>;
	v->elem=e;
	v->next=head;
	head=v;
}

template <typename E>
void SLinkedList<E>::remoceFront(){
	SNode<E>* old=head;
	head=old->next;
	delete old;
}

int main(){

	SLinkedList<string> str;
	str.addFront("paul");
	str.addFront("juma");

	cout<<str.front();

}
