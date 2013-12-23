#include"linkedlist.h"

int main()
{
 int a[]={3,1,4,2,4}; int b[]={1,2};
 LinkedList *ll = new LinkedList();
 ll->createLinkedList(a,5);
 ll->traversal(ll->getHead());
 std::cout<<endl;
 LinkedList *_ll = new LinkedList();
 _ll->createLinkedList(b,2);
_ll->traversal(_ll->getHead());
std::cout<<endl<<"After Modification";
ll->mergeAtAlternatePos(_ll);
ll->traversal(ll->getHead());
cout<<endl;
_ll->traversal(_ll->getHead());
}

