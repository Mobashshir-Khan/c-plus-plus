#include<iostream>
using namespace std;

int swap(int*,int*);
int main()
{
    int first,second;
    cout<<"Enter the first number:";
    cin>>first;
    cout<<"Enter the second number:";
    cin>>second;
    swap(&first,&second);
}

int swap (int* x,int*y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    cout<<"The values after swap are "<<*x<<" and "<<*y;
}