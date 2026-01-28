/*              LOGICAL OPERATORS
&&-->Both the conditions should be true
||-->Either of the conditions should be true
*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    if ((99 < num) && (num < 1000))
    {
        cout << "The number is a three digit number";
    }
    else
    {
        cout << "The number is not a three digit number";
    }
    return 0;
}