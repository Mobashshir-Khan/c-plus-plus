#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter the number of rows:";
    cin>>row;
    cout<<"Enter the number of columns:";
    cin>>col;
    cout<<endl;
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Enter "<<i+1<<" "<<j+1<<" element:";
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"The original matrix is "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"The transpose matrix is "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}