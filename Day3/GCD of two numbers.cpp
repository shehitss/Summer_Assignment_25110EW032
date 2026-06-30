#include<iostream>
using namespace std;
int main()
{
    int x,y,GCD;
   cout<<"Enter two Numbers:";
   cin>>x>>y;

  int z=min(x,y);

  for(int i=1;i<=z;i++)
  {
    if(x%i==0 and y%i==0)
      GCD=i;
  }
  cout<<"GCD of these Numbers:"<<GCD;
  
  return 0;
}