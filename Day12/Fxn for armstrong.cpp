#include<iostream>
using namespace std;
int digit(int n)
{ int dig;
    for(int i=1;n>0;i++)
    { 
        n=n/10;
        int dig=i;
    }
    return dig;
}
bool armstrong(int n)
{  int sum=0;
  digit(n);
  int x=n;
  for(int i=1;x>0;i++)
  {
        int rem=x%10;
        x=x/10;

        for(int i=1;i<digit(n);i++)
        {
             rem=rem*rem;
        }
        sum=sum+rem;
  }
  if(sum==n)
  return true;
  else
  return false;
}
int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;

   cout<<armstrong(n);

}