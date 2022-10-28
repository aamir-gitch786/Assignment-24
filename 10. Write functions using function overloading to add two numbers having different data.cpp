/******************************************************************************
10. Write functions using function overloading to add two numbers having different data
types.

*******************************************************************************/

#include <iostream>
float add(float a, float b);
using namespace std;

int main()
{
    float a,b;
    cout<<"Enter two number\n";
    cin>>a>>b;
    cout<<"Sum of these number is "<<add(a,b);
    return 0;
}
float add(float a, float b)
{
    return a+b;
}