#include<iostream>
#include<node.h>
using namespace std;

struct LinkedList{
	private:
		Node* _head;
		Node* _node
	public:
		LinkedList(){_head=NULL;}
		LinkedList(Node* head):_head(head){}
		Node* createNode(void* data);
		void deleteNode(Node* node);
		Node* getNthNode(int n);

};
