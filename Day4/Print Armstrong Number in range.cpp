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
     cout<<"Armstrong numbers in range are:\n";
for(int i=1;i<=n;i++)
{
   int e = digits(i);
   int sum1= sum(i,e);
   if(sum1==i)
   cout<<sum1<<"  ";
}
 return 0;
}