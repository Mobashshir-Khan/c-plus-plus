/*              NESTED IF ELSE
-->Used when more than two conditions are to be checked

                SYNATX
if(condition 1)
    {
        ..........
    }
else if(condition2)
     {
        ..........
     }
     else
     {
        ..........
     }
*/

#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age<18)
    {
        cout<<"You are a child";
    }
    else if(60>age>18)
        {
            cout<<"You are an adult";
        }
        else
        {
            cout<<"You are a senior citizen";
        }
    return 0;
}