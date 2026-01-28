#include <iostream>
using namespace std;
int main()
{
    int start, end, i;
    cout << "Enter the starting number:";
    cin >> start;
    cout << "Enter the ending number:";
    cin >> end;
    cout << "Even numbers between " << start << " and " << end << " are";
    for (i = start; i < end; i++)
    {
        if (i % 2 == 0)
        {
            cout << endl
                 << i;
        }
    }
    return 0;
}
