#include<iostream>
using namespace std;
int fact(int x)
{  if(x==0 || x==1)
    return 1;
    return x*fact(x-1);
     
}
int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;
   int factorial=fact(n);
   cout<<"Factorial of the Number is:"<<factorial;
   return 0;
}