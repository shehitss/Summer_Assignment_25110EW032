#include<iostream>
using namespace std;
bool isPrime(int x)
{
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        return false;
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;

    for(int i=2;i<=n;i++)
    { 
        if(isPrime(i))
        {    int x=i;
            while(n%x==0)
            {
                cout<<i<<" ";
                x=x*i;
            }

        }
    
    }
    return 0;
}