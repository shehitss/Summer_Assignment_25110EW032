#include<iostream>
using namespace std;
int main()
{
    int n,rem;
    cout<<"Enter the number:";
    cin>>n;

    for(int i=2;i<n;i++)
    {
        rem=n%i;
        if (rem==0)
        break;
    }
    if(rem==0)
    cout<<"Number is not Prime";
    else 
    cout<<"Number is Prime";

    return 0;
}