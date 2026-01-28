#include <iostream>
using namespace std;
int main()
{
    int num;
    int a = 0;
    cout << "Enter the numer of rows:";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 != 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }
}
