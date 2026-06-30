#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
{
    for(int j=1;j<=(2*n-1);j++)
    {
      if(j<=n-i || j>=n+i)
      {
        cout<<" "<<" ";
      }
      else
     { char letter='A'+(i-abs(n-j)-1);
      cout<<letter<<" ";
    }
  }
    cout<<"\n";
}
return 0;
}