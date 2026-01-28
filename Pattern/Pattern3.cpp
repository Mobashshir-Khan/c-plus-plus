/*              OUTPUT
1234
1234
1234
1234
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
        for (int j = 1; j <= num; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
