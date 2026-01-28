#include <iostream>
using namespace std;
int main()
{
    int num, check, count = 0;
    cout << "Enter the number of elements:";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter " << i + 1 << " number:";
        cin >> arr[i - 1];
    }
    cout << "Enter the number from which the numbers are been checeked:";
    cin >> check;
    for (int j = 0; j < num; j++)
    {
        if (arr[j] > check)
        {
            count++;
            cout << arr[j] << endl;
        }
    }
    if (count != 0)
    {
        cout << "Above are the numbers greater than " << check;
    }
    else
    {
        cout << "There are no greater number than " << check;
    }
}