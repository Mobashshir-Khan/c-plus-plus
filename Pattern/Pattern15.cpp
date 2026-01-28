#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number of rows:";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i == j) || (i + j == num + 1))
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}





