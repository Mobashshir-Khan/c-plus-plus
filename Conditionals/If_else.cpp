/*              IF ELSE
-->used for checking of two conditons
-->if the condition of if is true thwn if block is calculated otherwise else block

                SYNTAX
if(condition)
    {
        .............
    }
    else
    {
        .............    
    }
*/

#include<iostream>
using namespace std;
int main()
{
    int first,second;
    cout<<"Enter first number:";
    cin>>first;
    cout<<"Enter second number:";
    cin>>second;
    if(first==second)
    {       
        cout<<"Entered numbers are same";
    }
    else
    {
        cout<<"Entered numbers are different";
    }
    return 0;
}