/******************************************************************************

1. Define a function to check whether a given number is a Prime number or not.

*******************************************************************************/

#include <iostream>

using namespace std;
void prime(int);

int main()
{
    int n;
    prime(n);

    return 0;
}
void prime(int n)
{  int c=0;
    cout<<"Enter the number\n";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        c++;
    }
    (c==0)? cout<<n<<" is a prime number":cout<<n<<" is not a prime number";
}