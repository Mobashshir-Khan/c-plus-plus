#include <iostream>
using namespace std;

int factorial(int);
int combination(int, int);

int main()
{
    int num;
    cout << "Enter the number of rows:";
    cin >> num;
    for (int i = 0; i <= num; i++)
    {
        for(int j=0;j<=num-i;j++)
        {
            cout<<" ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
}

int combination(int n, int r)
{
    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n - r);
    return a / (b * c);
}

int factorial(int x)
{
    int fact = 1;
    for (int k = x; k > 1; k--)
    {
        fact = fact * k;
    }
    return fact;
}