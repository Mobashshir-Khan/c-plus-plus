#include <iostream>
using namespace std;
int main()
{
    int first, second, option;
    cout << "Enter first number:";
    cin >> first;
    cout << "Enter second number:";
    cin >> second;
    cout << "1-addition \n";
    cout << "2-Subtraction \n";
    cout << "3-Multiplication \n";
    cout << "4-Division \n";
    cout << "5-Modulus \n";
    cout << "Enter the respective option:";
    cin >> option;
    switch (option)
    {
    case 1:
    {
        cout << "The addition of two numbers is " << first + second;
        break;
    }
    case 2:
    {
        cout << "The subtraction of two numbers is " << first - second;
        break;
    }
    case 3:
    {
        cout << "The multiplication of two numbers is " << first * second;
        break;
    }
    case 4:
    {
        cout << "The division of two numbers is " << first / second;
        break;
    }
    case 5:
    {
        cout << "The modulus of two numbers is " << first % second;
        break;
    }
    default:
    {
        cout << "Enter a valid number ";
    }
    }
    return 0;
}
