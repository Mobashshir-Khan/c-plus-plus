#include <iostream>
using namespace std;
int main()
{
    int num, count = 0;
    cout << "Enter the number:";
    cin >> num;
    if (num == 0)
    {
        cout << "The numbers of digits are 1";
    }
    else
    {
        while (num > 0)
        {
            num = num / 10;
            count++;
        }
        cout << "The numbers of digits are " << count;
    }
    return 0;
}