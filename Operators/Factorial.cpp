#include <iostream>
using namespace std;
int main()
{
    int num, i;
    long fact = 1;
    cout << "Enter the number:";
    cin >> num;
    for (i = num; i > 1; i--)
    {
        fact = fact * i;
    }
    cout << "The factorial of " << num << " is " << fact;
    return 0;
}
