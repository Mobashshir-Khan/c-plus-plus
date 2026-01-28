#include<iostream>
using namespace std;

int sum(int x)
{
    int sum=0;
    for(int i=1;i<=x;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int last;
    cout<<"Enter the last number ";
    cin>>last;
    cout<<"The sum from 1 to "<<last<<" is "<<sum(last);
}