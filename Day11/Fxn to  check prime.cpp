#include<iostream>
using namespace std;
void isPrime(int n)
{ int rem;
    for(int i=2;i<n;i++)
    { rem=n%i;
        if(rem==0)
        break;
    }
    if(rem==0)
    cout<<"Not prime";
    else 
    cout<<"Prime";
}
int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;

    if(n==0 || n==1)
   {
     cout<<"Not Prime";
    return 0;
   }

   isPrime(n);

   return 0;


    
}