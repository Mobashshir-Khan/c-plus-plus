#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number of elments:";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter " << i + 1 << " number:";
        cin >> arr[i];
    }
    int temp;
    for (int j = 0; j < num / 2; j++)
    {
        temp = arr[j];
        arr[j] = arr[num - j - 1];
        arr[num - j - 1] = temp;
    }
    for (int k = 0; k < num; k++)
    {
        cout << arr[k] << endl;
    }
}