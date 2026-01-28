/*              DO WHILE
-->Used for execution of set of instructions repeatedly
-->It is executed atleast once

                SYNTAX
do
{
    ..........
}
while(condition);
*/

#include <iostream>
using namespace std;
int main()
{
    int i = 11;
    do
    {
        cout << i << endl;
        i++;
    }
    while(i<10);
    return 0;
}


