#include <iostream>
using namespace std;

int power(int, int);

int main()
{
    int base, raise;
    cout << "Enter the base value:";
    cin >> base;
    cout << "Enter the raised value:";
    cin >> raise;
    cout << "The power is :" << power(base, raise);
}

int power(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    return x * power(x, y - 1);
}
