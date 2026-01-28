#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the numver of rows:";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
        else
        {
            for (int j = 65; j <= i + 64; j++)
            {
                char ch = (char)j;
                cout << ch << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}
