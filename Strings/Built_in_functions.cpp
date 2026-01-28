#include<iostream>
using namespace std;
int main()
{
    string str="Mobashshir";
    //push_back
    cout<<str<<endl;
    str.push_back('r');
    cout<<str<<endl;
    str.push_back('r');
    cout<<str<<endl;
    //pop_back
    str.pop_back();
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
    //append
    str.append(" Khan");
    cout<<str<<endl;
    //clear
    str.clear();
    cout<<str<<" "<<str.length()<<endl;
}
