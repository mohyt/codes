#include"linkedlist.h"

int main()
{
 int a[]={3,1,4,2,4};
 LinkedList *ll = new LinkedList();
 ll->createLinkedList(a,5);
 ll->traversal(ll->getHead());
 std::cout<<endl;
 ll->getNthNode(0);
 ll->deleteNodeAtPos(5);
 ll->traversal(ll->getHead());
 std::cout<<ll->getNthNodeFromLast(2)->getData();
 ll->reverse(ll->getHead());
 ll->traversal(ll->getHead());
}

