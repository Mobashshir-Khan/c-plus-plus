#include <iostream>
using namespace std;

int sum(int);

int main()
{
    int num;
    cout << "Enter the last number:";
    cin >> num;
    cout << "The sum is " << sum(num);
}

int sum(int x)
{
    if (x == 1)
    {
        return 1;
    }
    return x + sum(x - 1);
}
