#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of rows ";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row-i;j++)
        {
           cout<<"  ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<k<<" ";
        }
        for(int m=i-1;m>=1;m--)
        {
            if(i>1)
            {
                cout<<m<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}