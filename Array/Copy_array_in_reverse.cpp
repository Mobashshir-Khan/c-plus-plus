#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number of elements:";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter " << i + 1 << " number:";
        cin >> arr[i];
    }
    int reverse[num];
    for (int j = 0; j < num; j++)
    {
        reverse[j] = arr[num - j - 1];
    }
    cout << "the reverse array is " << endl;
    for (int k = 0; k < num; k++)
    {
        cout << reverse[k] << endl;
    }
}