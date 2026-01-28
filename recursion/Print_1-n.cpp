#include <iostream>
using namespace std;

void print(int);

int main()
{
    int num;
    cout << "Enter the last number:";
    cin >> num;
    print(num);
}

void print(int x)
{
    if (x == 0)
    {
        return;
    }
    print(x - 1);
    cout << x << endl;
}
