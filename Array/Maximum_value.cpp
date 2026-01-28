#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    for(int i=1;i<11;i++)
    {
        cout<<"Enter "<<i<<" element:";
        cin>>arr[i-1];
    }
    int max=arr[0];
    for(int j=0;j<10;j++)
    {
        if(max<arr[j])
        {
            max=arr[j];
        }
    }
    cout<<"The maximum value is:"<<max;
}