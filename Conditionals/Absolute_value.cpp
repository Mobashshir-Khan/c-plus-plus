#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(num<0)
    {
        cout<<"The absolute value is:"<<0-num;
    }
    else
    {
        cout<<"The absolute value is:"<<num;
    }
    return 0;
}