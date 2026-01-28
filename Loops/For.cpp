/*              FOR
-->Used to execute set of instructions more than one time
-->If the condition is false, compiler exits the loop
                SYNTAX
for(initialization;condition;updation)
    {
        ............
    }
*/

#include <iostream>
using namespace std;
int main()
{
    int num, i;
    cout << "Enter the number of times:";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        cout << "Hello World" << endl;
    }
    return 0;
}