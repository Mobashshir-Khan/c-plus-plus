#include <iostream>
using namespace std;
int main()
{
    int num, i;
    cout << "Enter the number for table:";
    cin >> num;
    cout << "The table of " << num << " is ";
    for (i = 1; i < 11; i++)
    {
        cout << endl
             << num << "x" << i << "=" << num * i;
    }
    return 0;
}



