#include<iostream>
using namespace std;
int main()
{
    int percent;
    cout<<"Enter the percentage:";
    cin>>percent;
    if((percent>80)&&(percent<101))
    {
        cout<<"Very good";
    }
    else if((percent>60)&&(percent<81))
        {
            cout<<"Good";
        }
        else if ((percent>40)&&(percent<61))
            {
                cout<<"Average";
            }
            else if (percent<=40)
                {
                    cout<<"Fail";
                }
                else
                {
                    cout<<"Enter valid marks";
                }
    return 0;
}