#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<iostream>
#include"node.h"
using namespace std;

struct LinkedList{
	private:
		Node* _head;
		Node* _node;
	public:
		LinkedList(){_head=NULL;}
		LinkedList(Node* head):_head(head){}
        void createLinkedList(int arr[],int arr_size);
		void insertNodeAtPos(int data,int position=0);
		void deleteNodeAtPos(int position=0);
        void traversal(Node*);
        Node* getMiddleNode(Node*);
		Node* getNthNode(int n);
        Node* getNthNodeFromLast(int n);
        void deleteLinkedList(Node*);
        Node* reverse(Node*);
        Node* getHead()
        {
            return _head;
        }
};
#endif
