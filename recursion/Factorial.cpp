#include <iostream>
using namespace std;

int fact(int);

int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    cout << "The factorial is: " << fact(num);
}

int fact(int x)
{
    if (x == 1)
    {
        return 1;
    }
    return x * fact(x - 1);
}
