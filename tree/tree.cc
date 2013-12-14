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
