#include <iostream>
using namespace std;
int main()
{
    int length, breadth, area, per;
    cout << "Enter the length of rectangle:";
    cin >> length;
    cout << "Enter the breadth of rectangle:";
    cin >> breadth;
    area = length * breadth;
    per = 2 * (length + breadth);
    cout << "The area of rectangle is:" << area << endl;
    cout << "The perimeter of rectangle is:" << per << endl;
    if (area > per)
    {
        cout << "The area is greater than perimeter";
    }
    else
    {
        cout << "The area is smaller than perimeter";
    }
    return 0;
}