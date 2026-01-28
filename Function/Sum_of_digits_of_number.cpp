#include<iostream>
using namespace std;

int sum(int x)
{
    int sum=0;
    while(x>0)
    {
        sum=sum+(x%10);
        x=x/10;
    }
    return sum;
}

int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    cout<<"The sum of total digits are "<<sum(num);
}