#include<iostream>
using namespace std;
void fibonacci(int &n)
{
    int first=1;
    int second=1;
    if(n==0)
    cout<<"1";
    else if(n==1)
    cout<<"1  1";
    else
    {cout<<"1  1"<<"  ";

    for(int i=2;i<=n;i++)
    {
        int third=first+second;
        cout<<third<<"  ";
        first=second;
        second=third;
        
    }
}
}
int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;

    fibonacci(n);
}