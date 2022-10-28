/******************************************************************************

7. Write a function using the default argument that is able to add 2 or 3 numbers.

*******************************************************************************/

#include <iostream>

using namespace std;
int sum(int,int=0,int=0);
int main()
{
    int a,b;
    cout<<"Enter two number\n";
    cin>>a>>b;
    cout<<"Sum is "<<sum(a,b);
    int x,y,z;
    cout<<"\nEnter the three number\n";
    cin>>x>>y>>z;
    cout<<"Sum is "<<sum(x,y,z);

    return 0;
}
int sum(int a,int b,int c)
{
 return a+b+c;   
}