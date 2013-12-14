#include"linkedlist.h"

Node* Linkedlist::createNode(void* data)
{
	node = new Node(data,NULL,NULL);
}
void Linkedlist::deleteNode(Node* node)
{
	delete(node);
}

Node* Linkedlist::getNthNode(int n)
{
	int count=1;
	Node* trvPtr=_head;

	while(trvPtr)
	{
		if(count==n)
			break;
		count=count+1;
		trvPtr = trvPtr->next;
	}
	return trvPtr;
}


