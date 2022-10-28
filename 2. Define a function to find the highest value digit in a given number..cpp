/******************************************************************************

2. Define a function to find the highest value digit in a given number.

*******************************************************************************/

#include <iostream>

using namespace std;
void highest_value(int);

int main()
{
    int n;
    highest_value(n);

    return 0;
}
void highest_value(int n)
{   int ans=0,tem=0;
    cout<<"Enter the number\n";
    cin>>n;
    while(n)
    {
      tem=n%10;
      if(ans<tem)
      ans=tem;
      n/=10;
    }
    cout<<"Highest value of this given number is "<<ans;
}