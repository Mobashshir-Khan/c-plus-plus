#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number of elements:";
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cout<<"Enter "<<i+1<<" number:";
        cin>>arr[i];
    }
    int count=0;
    for(int j=0;j<num/2;j++)
    {
        if(arr[j]==arr[num-j-1])
        {
            count++;
        }
    }
    if(count!=0)
    {
        cout<<"The array is palindrome";
    }
    else
    {
        cout<<"The array is not palindrome";
    }
}