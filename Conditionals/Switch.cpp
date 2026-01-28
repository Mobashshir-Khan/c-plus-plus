/*              SWITCH
-->Used for two or more than cases
-->If any condition does not matches then a default statement at last is executed

                SYNTAX
switch(variable_name)
{
    case 1:
    {
        .........
        break;
    }
    case 2:
    {
        .........
        break;
    }
    default:
    {
        .........
    }
}
*/

#include<iostream>
using namespace std;
int main()
{
    int option;
    cout<<"Enter the number of the specific day:";
    cin>>option;
    switch(option)
    {
        case 1:
        {
            cout<<"The day is sunday";
            break;
        }
        case 2:
        {
            cout<<"The day is monday";
            break;
        }
        case 3:
        {
            cout<<"the day is tuesday";
            break;
        }
        case 4:
        {
            cout<<"The day is wednesday";
            break;
        }
        case 5:
        {
            cout<<"The day is thursday";
            break;
        }
        case 6:
        {
            cout<<"The day is friday";
            break;
        }
        case 7:
        {
            cout<<"The day is saturday";
            break;
        }
        default:
        {
            cout<<"Enter the valid number";
        }
    }
    return 0;
}
