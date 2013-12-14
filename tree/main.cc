#include"node.h"
#include"stack.h"
using namespace std;

int main()
{
    int a[]={5,7,3,1,2};

    Stack *st = new Stack();
    st->push(new Node(a[0]));
    st->push(new Node(a[3]));
    st->stackDisplay();
};
