#include<iostream>
using namespace std;
int fibonacci(int x)
{
   if(x==0)
   return 0;
   else if(x==1)
   return 1;
   return fibonacci(x-2)+fibonacci(x-1);

}
int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    cout<<"Fibonacci series:"<<endl;
    for(int i=0;i<=n;i++)
   {
    cout<<fibonacci(i)<<" ";
   }
    return 0;
}