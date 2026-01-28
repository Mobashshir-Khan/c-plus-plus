#include <iostream>
using namespace std;

int fibonacci(int);

int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    cout << "The fibonacci number is " << fibonacci(num);
}

int fibonacci(int x)
{
    if (x == 1 || x == 2)
    {
        return 1;
    }
    return fibonacci(x - 1) + fibonacci(x - 2);
}
