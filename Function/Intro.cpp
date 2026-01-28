/*              FUNCTION
-->Used to run a set of instructins repeatedlyoutside the main block

                SYNTAX
function_name(variable_type);                    ----Declaratiom
function_name(variable_name);                    ----Callimg
function_name(variable_type variable_name)       ----Definition
{
    ..................
}
*/

#include<iostream>
using namespace std;
int greet();
int main()
{
    greet();
}
int greet()
{
    cout<<"Good morning";
}