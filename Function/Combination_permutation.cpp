#include<iostream>
using namespace std;

float permutation(int,int);
float combination(int,int);

int main()
{
    int n,r;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Enter the value of r:";
    cin>>r;
    cout<<"The permutation is "<<permutation(n,r)<<endl;
    cout<<"The combination is "<<combination(n,r);
}

float permutation(int x,int y)
{
    int up=1,down=1;
    for(int i=x;i>1;i--)
    {
        up=up*i;
    }
    for(int j=x-y;j>1;j--)
    {
        down=down*j;
    }
    return up/(down*1.0);
}

float combination(int x,int y)
{
    int down1=1;
    for(int k=y;k>1;k--)
    {
        down1=down1*k;
    }
    int up=1,down=1;
    for(int i=x;i>1;i--)
    {
        up=up*i;
    }
    for(int j=x-y;j>1;j--)
    {
        down=down*j;
    }
    return up/(down1*down*1.0);
}