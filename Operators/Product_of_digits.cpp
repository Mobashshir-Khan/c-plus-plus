#include <iostream>
using namespace std;
int main()
{
    int num, product = 1;
    cout << "Enter the number:";
    cin >> num;
    while (num > 0)
    {
        product = product * num % 10;
        num = num / 10;
    }
    cout << "The product of digits present in the number is " << product;
    return 0;
}