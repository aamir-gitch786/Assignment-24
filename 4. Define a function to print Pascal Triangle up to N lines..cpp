/******************************************************************************

4. Define a function to print Pascal Triangle up to N lines.

*******************************************************************************/

#include <iostream>


using namespace std;
void pascal(int);
int fact(int);

int main()
{
    int n;
    cout<<"Enter number of lines\n";
    cin>>n;
    pascal(n-1);
    return 0;
}
int fact(int n)
{ int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    return ans;
}
void pascal(int n)
{   
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
          cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
        cout<<endl;
    }
}