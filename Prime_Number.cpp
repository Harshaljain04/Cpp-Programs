#include<iostream>
using namespace std;
int main()
{
    int n=0,x,i;
    cout<<"Enter Number = ";
    cin>>x;

    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            n=1;
        }
    }

    if(n==0)
    {
        cout<<"Prime Number.";
    }
    else
    {
        cout<<"Not Prime.";
    }
    return 0;
}