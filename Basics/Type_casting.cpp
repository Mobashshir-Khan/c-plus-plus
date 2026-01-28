/*                  TYPE CASTING
-->Converting int to float and float to int.
    Float --> int      int a=(int)b;
    int --> float      float a=(float)b;
*/

// Half of any number
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    float a = (float)num;
    cout << "The half of the given number is: " << a / 2;
    return 0;
}