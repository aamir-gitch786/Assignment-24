/******************************************************************************

3. Define a function to calculate x raised to the power y.

*******************************************************************************/

#include <iostream>
#include<math.h>

using namespace std;
void power(int,int);

int main()
{
    int x,y;
    power(x,y);

    return 0;
}
void power(int x,int y)
{   
    cout<<"Enter the two number\n";
    cin>>x>>y;
    
    cout<<x <<" raised to the power "<<y <<" is "<<pow(x,y);
}