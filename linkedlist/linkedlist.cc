#include"linkedlist.h"

void LinkedList::insertNodeAtPos(int data,int position)
{
	Node* _node = new Node(data,NULL,NULL);
    Node* _trvPtr = _head;
    int _nodeCount=0;
    if(position==0)
    {
        _node->setNext(_head);
        _head = _node;
        return;
    }
    while(_trvPtr != NULL)
    {
        if(_nodeCount+1 == position)
        {
            _node->setNext(_trvPtr->getNext());
            _trvPtr->setNext(_node);
            break;
        }
        else
        {
            _trvPtr = _trvPtr->getNext();
            ++_nodeCount;
        }
    }
}

void LinkedList::createLinkedList(int arr[],int arr_size)
{
    for(int i=0;i<arr_size;i++)
    {
        insertNodeAtPos(arr[i]);
    }
}

void LinkedList::traversal(Node* trvPtr)
{
    if(trvPtr==NULL)
    {
        cout<<"Empty LinkedList\n";
        return;
    }
    while(trvPtr)
    {
        cout<<trvPtr->getData()<<" ";
        trvPtr=trvPtr->getNext();
    }
}

void LinkedList::deleteNodeAtPos(int position)
{
    int _nodeCount =0 ;
    Node* _trvPtr=_head,*_node;
    if(_head)
    {
        if(position == 0)
        {
            _node = _head;
            _head = _node->getNext();
            _node->setNext(NULL);
            delete(_node);
            return;
        }
        while(_trvPtr->getNext())
        {
            if(_nodeCount+1 == position)
            {
                _node = _trvPtr->getNext();
                _trvPtr->setNext(_node->getNext());
                _node->setNext(NULL);
                delete(_node);
                break;
            }
            else
            {
                _trvPtr=_trvPtr->getNext();
                ++_nodeCount;
            }
        }
    }

}

Node* LinkedList::reverse(Node* node)
{
    Node* _first = _head;
    if(node == NULL)
    {
        return NULL;
    }
    Node* _tNode = reverse(node->getNext());
    if(_tNode)
    {
        _tNode->setNext(node);
    }
    else
    {
        _head=node;
    }
    if(_first == node)
    {
        _first->setNext(NULL);
    }
    return node;
}

Node* LinkedList::getMiddleNode(Node* node)
{   bool flag = false;
    if(node && node->getNext())
    {
        Node* _ftrvPtr=node;
        Node* _strvPtr=node;
        while(_ftrvPtr && _ftrvPtr->getNext())
        {
            _ftrvPtr=_ftrvPtr->getNext()->getNext();
            _strvPtr=_strvPtr->getNext();
        }
        return _strvPtr;
    }
    return node;
}

Node* LinkedList::getNthNode(int n)
{
	int _nodeCount=0;
    Node* _trvPtr=_head;
	while(_trvPtr)
	{
		if(_nodeCount==n-1)
			break;
		_nodeCount=_nodeCount+1;
		_trvPtr = _trvPtr->getNext();
	}
	return _trvPtr;
}

Node* LinkedList::getNthNodeFromLast(int n)
{
    int _nodeCount=0;
    Node* _ftrvPtr=_head;
    Node* _trvPtr=_head;
    while(_nodeCount < n)
    {
        ++_nodeCount;
        _ftrvPtr = _ftrvPtr->getNext();
    }
    while(_ftrvPtr)
    {
        _ftrvPtr=_ftrvPtr->getNext();
        _trvPtr=_trvPtr->getNext();
    }
    return _trvPtr;
}

void LinkedList::deleteLinkedList(Node* node)
{
    Node* _currPtr=node;
    if(_currPtr)
    {   Node* _nextPtr;
        while(_currPtr)
        {
            _nextPtr=_currPtr->getNext();
            _currPtr->setNext(NULL);
            delete(_currPtr);
            _currPtr=_nextPtr;
        }
        _head=NULL;
    }
}


