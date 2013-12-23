#ifndef SORT_H
#define SORT_H
#include<iostream>

void merge_sort(int A[],int p,int r);
void merge(int A[],int p,int q,int r);
void mergeTwoArrayIntoThird(int L[],int R[],int n1,int n2,int A[],int p,int r);
int partition(int A[],int p,int r);
void quick_sort(int A[],int p,int r);
void display(int A[],int n);
void xorSwap(int A[],int q,int r);
void swap(int A[],int q,int r);
#endif
