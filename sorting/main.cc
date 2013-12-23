#include"sort.h"

int main()
{
    int A[]={8,7,6,5,4,3,2,1};
    display(A,8);
    quick_sort(A,0,7);
    std::cout<<"\n";
    display(A,8);
}
