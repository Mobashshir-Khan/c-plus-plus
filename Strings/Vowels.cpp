#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the sentence:";
    getline(cin,str);
    int count=0;
    for(int i=0;i<str.length();i++)
    {
        if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='O')||(str[i]=='I')||(str[i]=='U'))
        {
            count++;
            cout<<str[i]<<" ";
        }
    }
    cout<<endl;
    if(count!=0)
    {
        cout<<"Above are the vowels:";
        cout<<"There are "<<count<<" vowels";
    }
    else
    {
        cout<<"There are no vowels in the sentence";
    }
}