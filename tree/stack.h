#ifndef STACK_H
#define STACK_H

#include<iostream>
#include"node.h"
using namespace std;
const int size = 100;

struct Stack{
    private:
        int top;
        Node* data[size];
    public:
        Stack():top(-1){}
        Node* getTop();
        bool isEmpty();
        bool push(Node* value);
        Node* pop();
        void stackDisplay();
};
#endif

