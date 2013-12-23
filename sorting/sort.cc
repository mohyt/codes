#include"sort.h"

void merge_sort(int A[],int p, int r)
{
    if(p>=r)
    {
        return ;
    }
    int q = (p+r)/2;
    merge_sort(A,p,q);
    merge_sort(A,q+1,r);
    merge(A,p,q,r);
}

void merge(int A[],int p,int q, int r)
{
    const int n1 = q-p+1;
    const int n2 = r-q;

    int L[n1] ;
    int R[n2] ;

    for(int i=0;i<n1;i++)
    {
        L[i]=A[p+i];
    }
    for(int i=0;i<n2;i++)
    {
        R[i]=A[q+i+1];
    }
    mergeTwoArrayIntoThird(L,R,n1,n2,A,p,r);
}

void mergeTwoArrayIntoThird(int L[],int R[],int n1,int n2,int A[],int p,int r)
{
    int i=0;
    int j=0;
    while(p<=r)
    {
        if(i!=n1 && j!=n2)
        {
            if(L[i]<=R[j])
            {
                A[p] = L[i];
                i++;
            }
            else
            {
                A[p] = R[j];
                j++;
            }
        }
        else if(i!=n1 && j==n2)
        {
            A[p] = L[i];
            i++;
        }
        else if(j!=n2 && i==n1)
        {
            A[p] = R[j];
            j++;
        }
        p++;
    }
}

void quick_sort(int A[],int p,int r)
{
    if(p<r)
    {
        int pivot = partition(A,p,r);
        quick_sort(A,p,pivot-1);
        quick_sort(A,pivot+1,r);
    }
}

int partition(int A[],int q,int r)
{
    int i = q-1;
    int x = A[r];
    for(int j=q;j<r;j++)
    {
        if(A[j]<=x)
        {
            i=i+1;
            swap(A,i,j);// xorSwap cannot be use here, because x^x =0
        }
     }
    swap(A,i+1,r);
    return i+1;
}

void xorSwap(int A[],int q,int r)
{
    A[q] = A[q]^A[r];
    A[r] = A[q]^A[r];
    A[q] = A[q]^A[r];
}

void swap(int A[],int q,int r)
{
    int temp;
    temp = A[q];
    A[q] = A[r];
    A[r] = temp;
}

void display(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        std::cout<<A[i]<<" ";
    }
}
