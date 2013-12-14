#ifndef TREE_H
#define TREE_H

#include<iostream>
#include"node.h"
using namespace std;

struct Tree{
    private:
        Node* _root;
    public:
        Tree():_root(NULL){};
        Tree(Node* root):_root(root){};
        Node* getRoot()
        {
            return _root;
        }
        void createTree(int arr[],int arr_size);
        void insertNodeTree(int data);
        void inOrderTrav(Node*);
        void preOrderTrav(Node*);
        void postOrderTrav(Node*);
        void setRoot(Node* root)
        {
            _root = root;
        }
};

#endif
