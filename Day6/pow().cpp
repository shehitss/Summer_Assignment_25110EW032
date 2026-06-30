#include<iostream>
using namespace std;
int main()
{
    int x,n,pow;
    cout<<"Enter x:";
    cin>>x;
    cout<<"Enter n:";
    cin>>n;
    pow=x;

    for(int i=1;i<n;i++)
    {
        pow=pow*x;
    }
    cout<<"pow():"<<pow;
    return 0;

}