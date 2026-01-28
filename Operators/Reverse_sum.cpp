#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "Enter the number:";
    cin >> num;
    cout << "The reverse of the number is ";
    while (num > 0)
    {
        cout << num % 10;
        sum = sum + num % 10;
        num = num / 10;
    }
    sum = sum + num;
    cout << endl
         << "The sum of all digits of the reverse number is " << sum;
    return 0;
}
