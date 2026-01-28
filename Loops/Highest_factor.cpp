#include <iostream>
using namespace std;
int main()
{
    int num, i;
    cout << "Enter the number:";
    cin >> num;
    cout << "The highest factor is:";
    for (i = num - 1; i > 0; i--)
    {
        if (num % i == 0)
        {
            cout << i;
            break;
        }
    }
    return 0;
}