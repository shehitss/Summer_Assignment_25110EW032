#include<iostream>
using namespace std;
int pow(int x,int y)//fxn for calculating power
{  int pow=1;
    for(int i=1;i<=y;i++)
    {  
        pow=pow*x;
    }
    return pow;
  }
int digits(int x)//fxn for calculating no. of digits.
{  int digit;
  for(int i=1;x>0;i++)
  {     x=x/10;
    digit=i;
  }
  return digit;
}
int sum(int x,int y)//fxn to apply the nature of armstrong number.
{
     int sum2=0;
    for(int i=1;x>0;i++)
    {
      int  rem=x%10;
        x=x/10;
        sum2=sum2+pow(rem,y);
    }
    return sum2;
    
  
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;

   int e = digits(n);
   int sum1= sum(n,e);

   if(sum1==n)
   cout<<"No. is armstrong Number.";
   else
   cout<<"No. is not an armstrong Number.";

   return 0;
}