/******************************************************************************

8. Define overloaded functions to calculate area of circle, area of rectangle and area of
triangle

*******************************************************************************/

#include <iostream>

using namespace std;
float area(int r);
float area(float l,float b);
int main()
{
    int r;
    cout<<"Enter the radious of circle\n";
    cin>>r;
    cout<<"Area of circle is "<<area(r);
    int l,b;
    cout<<"\nEnter the length and breath of rectangle\n";
    cin>>l>>b;
    cout<<"\nArea of rectangle is "<<area(l,b);
    int h;
    cout<<"\nEnter the base and hight of triangle\n";
    cin>>b>>h;
    cout<<"\nArea of triangle is "<<area(0.5*b,h);
    

    return 0;
}
float area(int r)
{
    return 3.14*r*r;
}
float area(float a,float b)
{
    return a*b;
}