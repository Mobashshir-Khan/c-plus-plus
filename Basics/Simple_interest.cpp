#include <iostream>
using namespace std;
int main()
{
    float P, R, T, SI; // P=Principle, R=Rate of return, Time=no. of months
    cout << "Enter the principle value:";
    cin >> P;
    cout << "Enter the rate or return:";
    cin >> R;
    cout << "Enter the time period in months:";
    cin >> T;
    SI = (P * R * T) / 100;
    cout << "The simple interest for the given data is: " << SI;
    return 0;
}