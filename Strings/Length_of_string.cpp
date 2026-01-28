#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter your full name:";
    getline(cin,str);
    cout<<"The length of your name is:"<<str.length()<<endl;
    cout<<"The length of your name is:"<<str.size();
}