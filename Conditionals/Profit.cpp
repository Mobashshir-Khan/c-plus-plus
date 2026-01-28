#include<iostream>
using namespace std;
int main()
{
    int sp,cp;
    cout<<"Enter the cost price:";
    cin>>cp;
    cout<<"Enter the selling price:";
    cin>>sp;
    if(cp==sp)
    {
        cout<<"You made no profit or no loss";
    }
    else if(cp<sp)
        {
            cout<<"You made a profit of "<<sp-cp<<" rupees";
        }
        else
        {
            cout<<"You made a loss of "<<cp-sp<<" rupees";
        }
    return 0;
}