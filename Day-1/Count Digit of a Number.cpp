#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
    cout<<"Enter a Number:";
    cin>>n;

    while(n>0)
    {
       n=n/10;
       x++;
    }
    cout<<"No. of Digits of a Number:"<<x;

    return 0;
}