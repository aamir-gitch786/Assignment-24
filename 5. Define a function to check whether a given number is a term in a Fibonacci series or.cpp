/******************************************************************************

5. Define a function to check whether a given number is a term in a Fibonacci series or
not.

*******************************************************************************/
//A number is Fibonacci if and only if one or both of (5*n2 + 4) or (5*n2 – 4) is a perfect square

#include <iostream>
#include<math.h>
using namespace std;

void fibonacci(int);
int perfect(int);

int main()
{
    int n;
    cout<<"Enter the number \n";
    cin>>n;
    fibonacci(n);
    return 0;
}
int perfect(int n)
{
    int ans;
    ans=sqrt(n);
    if(ans*ans==n)
    return 1;
    else
    return 0;
}
void fibonacci(int n)
{
   if(perfect((5*n*n)+4) || perfect((5*n*n)-4)) 
   cout<<"Yes it is a term of fibonacci series\n";
   else
   cout<<"No it is not a term of fibonacci series\n";
}
