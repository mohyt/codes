#include"stack.h"

using namespace std;

bool Stack::isEmpty(){
    if(top == -1)
        return true;
    return false;
}

bool Stack::push(Node* value){
    if(top!=size-1)
    {
        data[++top] = value;
        return true;
    }
    return false;
}

Node* Stack::pop(){
    if(top!=-1){
        Node* _value = getTop();
        top = top-1;
        return _value;
    }
    return NULL;
}

Node* Stack::getTop(){
    return data[top];
}

void Stack::stackDisplay(){
    while(top!=-1)
    {
        cout<<pop()->getData()<<" ";
    }
}
