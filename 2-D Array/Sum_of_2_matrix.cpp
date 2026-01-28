#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter the number of rows:";
    cin>>row;
    cout<<"Enter the number of columns:";
    cin>>col;
    int one[row][col];
    int two[row][col];
    cout<<endl;
    cout<<"Information of first matrix"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Enter the "<<i+1<<" "<<j+1<<" element:";
            cin>>one[i][j];
        }
    }
    cout<<endl;
    cout<<"Information of second matrix"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Enter the "<<i+1<<" "<<j+1<<" element:";
            cin>>two[i][j];
        }
    }
    cout<<endl;
    cout<<"Addition of the given two matrix"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<one[i][j]+two[i][j]<<" ";
        }
        cout<<endl;
    }
}