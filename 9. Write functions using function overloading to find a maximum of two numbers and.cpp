/******************************************************************************
9. Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.

*******************************************************************************/

#include <iostream>
float max(float a, float b);
using namespace std;

int main()
{
    float a,b;
    cout<<"Enter two number\n";
    cin>>a>>b;
    cout<<"Maximum number is "<<max(a,b);
    return 0;
}
float max(float a, float b)
{ float tem;
    (a>b)?tem=a:tem=b;
    return tem;
}