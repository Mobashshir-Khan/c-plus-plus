#include <iostream>
using namespace std;
int main()
{
    int first, second, third, sum;
    cout << "Enter the first number:";
    cin >> first;
    cout << "Enter the second number:";
    cin >> second;
    cout << "Enter the third number:";
    cin >> third;
    sum = first + second + third;
    cout << "The addition of three numbers is: " << sum;
    return 0;
}