#include <iostream>
using namespace std;
int main()
{
    int first, second, third;
    cout << "Enter first number:";
    cin >> first;
    cout << "Enter second number:";
    cin >> second;
    cout << "Enter third number:";
    cin >> third;
    if((first>second)&&(first>third))
    {
        cout<<first<<" is greatest";
    }
    else if((second>first)&&(second>third))
        {
            cout<<second<<"is graetest";
        }
        else
        {
            cout<<third<<"is greatest";
        }
    return 0;
}