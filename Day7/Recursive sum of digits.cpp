#include<iostream>
using namespace std;
int sumDigit(int x)
{
   if(x==0)
   return 0;

  int rem=x%10;
    x=x/10;
    return rem+sumDigit(x);
  
}
int main()
{
    int n;
    cin>>n;

   cout<< sumDigit(n);
   return 0;
}
