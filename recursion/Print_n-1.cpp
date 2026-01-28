#include <iostream>
using namespace std;

int print(int);
int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    print(num);
}

int print(int x)
{
    cout << x << endl;
    x--;
    if (x != 0)
    {
        print(x);
    }
}
