#include <iostream>
using namespace std;
int main()
{
    int num, even, i, sum = 0;
    cout << "Enter the number:";
    cin >> num;
    while (num > 0)
    {
        even = num % 10;
        if (even % 2 == 0)
        {
            sum = sum + even;
        }
        num = num / 10;
    }
    cout << "The sum of even digits of the numbber is " << sum;
    return 0;
}
