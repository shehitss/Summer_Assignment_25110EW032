#include<iostream>
using namespace std;
int fact(int x)
{ 
    int factorial=1;
 for(int i=1;i<=x;i++)
    {
        factorial=factorial*i;
    }
    return factorial;

}
int main()
{
    int n,rem,sum=0;
    cout<<"Enter a Number:";
    cin>>n;
int x=n;
    for(int i=1;x>0;i++)
    {
        rem=x%10;
        x=x/10;
        sum=sum+fact(rem);
    }
    if(sum==n)
    cout<<"Strong Number.";
    else 
    cout<<"Not a Strong Number.";
    return 0;
}