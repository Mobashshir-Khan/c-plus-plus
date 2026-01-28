/*              OUTPUT
ABCD
ABCD
ABCD
ABCD
*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number of rows:";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 65; j< 65 + num; j++)
        {
            char ch = (char)j;
            cout << ch <<' ';
        }
        cout << endl;
    }
}

