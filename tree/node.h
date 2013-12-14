#ifndef NODE_H
#define NODE_H

#include<iostream>
using namespace std;

struct Node{
    private:
        Node* _left;
        Node* _right;
        int _data;
    public:
        Node(int data):_data(data),_left(NULL),_right(NULL){}
        int getData()
        {
            return _data;
        }
        Node* getLeftNode()
        {
            return _left;
        }
        Node* getRightNode()
        {
            return _right;
        }
        void setRightNode(Node* right)
        {
            _right = right;
        }
        void setLeftNode(Node* left)
        {
            _left = left;
        }
};
#endif
