#include<iostream>
using namespace std;
int main()
{
    unsigned long long  n,fact=1;
    cout<<"Enter a Number:";
    cin>>n;

    for(unsigned long long i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of number is:"<<fact;

    return 0;
}