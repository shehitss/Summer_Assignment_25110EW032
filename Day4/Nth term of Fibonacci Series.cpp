#include<iostream>
using namespace std;
void term(int n)
{
    int a=0;
    int b=1;
    int c=0;
if(n==1)
cout<<a;
else if(n==2)
cout<<b;
else
{
    for(int i=2;i<n;i++)// 0 1 1 2 3 5 8 13 .......
    {
       c=a+b;
       a=b;
       b=c;
    }
    cout<<b;
}
}
int main()
{
    int x;
    cout<<"Enter term:";
    cin>>x;

    term(x);
    return 0;
}