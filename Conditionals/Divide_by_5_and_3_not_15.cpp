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
    if (((num % 5 == 0) || (num % 3 == 0))&&(num%15!=0))
    {
        cout << "The number is divisible by 5 and 3 and not by 15";
    }
    else
    {
        cout << "The number is not divisible by 5 and 3 and by 15";
    }
    return 0;
}