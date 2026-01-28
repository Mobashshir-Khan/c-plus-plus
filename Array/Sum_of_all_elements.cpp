#include<iostream>
using namespace std;
int main()
{
    int arr[10],sum=0;
    for(int i=1;i<11;i++)
    {
        cout<<"Enter "<<i<<" element:";
        cin>>arr[i-1];
    }
    for(int j=0;j<10;j++)
    {
        sum=sum+arr[j];
    }
    cout<<"The sum is:"<<sum;
}