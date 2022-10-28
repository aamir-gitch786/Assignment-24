/******************************************************************************

6. Define a function to swap data of two int variables using call by reference

*******************************************************************************/

#include <iostream>

using namespace std;
void swap(int&,int&);
int main()
{
    int a,b;
    cout<<"Enter two number\n";
    cin>>a>>b;
    swap(a,b);

    return 0;
}
void swap(int &a,int &b)
{
    int tem;
    tem=a;
    a=b;
    b=tem;
    cout<<"After swaping "<<a<<" and "<<b;
}