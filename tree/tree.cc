#include"tree.h"
using namespace std;

void Tree::createTree(int arr[],int arr_size){
    for (int i = 0;i<arr_size;i++)
    {
        insertNodeTree(arr[i]);
    }
}

void Tree::insertNodeTree(int data){
    Node* newNode = new Node(data);
    Node* trvPtr = _root;
    bool flag = true;
    if(trvPtr == NULL)
    {
        setRoot(newNode);
        flag = false;
    }
    while(flag)
    {
        if(trvPtr->getData() < newNode->getData())
        {
            if(trvPtr->getRightNode())
            {
                trvPtr = trvPtr->getRightNode();
            }
            else
            {
                trvPtr->setRightNode(newNode);
                flag = false;
            }
        }
        else if(trvPtr->getData() >= newNode->getData())
        {
            if(trvPtr->getLeftNode())
            {
                trvPtr = trvPtr->getLeftNode();
            }
            else
            {
                trvPtr->setLeftNode(newNode);
                flag = false;
            }
        }
    }
}

void Tree::preOrderTrav(Node* trvPtr){
     if(trvPtr==NULL)
         return;
     cout<<trvPtr->getData()<<" ";
     preOrderTrav(trvPtr->getLeftNode());
     preOrderTrav(trvPtr->getRightNode());
}

void Tree::inOrderTrav(Node* trvPtr){
    if(trvPtr==NULL)
        return;
    inOrderTrav(trvPtr->getLeftNode());
    cout<<trvPtr->getData()<<" ";
    inOrderTrav(trvPtr->getRightNode());
}

void Tree::postOrderTrav(Node* trvPtr){
    if(trvPtr==NULL)
        return;
    postOrderTrav(trvPtr->getLeftNode());
    postOrderTrav(trvPtr->getRightNode());
    cout<<trvPtr->getData()<<" ";
}

Node* Tree::getPredecessor(Node* curr)
{
	Node* trvPtr = curr->getLeftNode();
	if(trvPtr)
	{
		while(trvPtr->getRightNode() && trvPtr->getRightNode() != curr)
		{
			trvPtr = trvPtr->getRightNode();
		}
		return trvPtr;
	}
	return NULL;
}

void Tree::morrisTrav(Node* trvPtr){
	Node* curr, *pre;
	curr = trvPtr;
	if(curr == NULL)
	{
		return;
	}
	while(curr != NULL)
	{
		if(curr->getLeftNode() == NULL)
		{
			cout<<curr->getData();
			curr=curr->getRightNode();
		}
		else
		{
			pre=getPredecessor(curr);
			if(pre->getRightNode() == NULL)
			{
				pre->setRightNode(curr);
				curr=curr->getLeftNode();
			}
			else
			{
				pre->setRightNode(NULL);
				cout<<curr->getData();
				curr=curr->getRightNode();
			}
		}
	}
}
