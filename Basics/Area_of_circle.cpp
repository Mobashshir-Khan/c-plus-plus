#include <iostream>
using namespace std;
int main()
{
    int radius;
    float area;
    cout << "Enter radius of circle:";
    cin >> radius;
    area = 3.142 * radius * radius;
    cout << "The area of circle of radius " << radius << " is " << area;
    return 0;
}