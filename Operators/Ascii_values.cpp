#include <iostream>
using namespace std;
int main()
{
    int small = 97;
    int caps = 65;
    cout << "The alphabets in lower case with their equivalent ascii values" << endl;
    while (small < 123)
    {
        cout << small << "-";
        char ch = (char)small;
        cout << ch << endl;
        small++;
    }
    cout << "The alphabets in upper case with their eqivalent ascii values" << endl;
    while (caps < 91)
    {
        cout << caps << "-";
        char ch = (char)caps;
        cout << ch << endl;
        caps++;
    }
}
