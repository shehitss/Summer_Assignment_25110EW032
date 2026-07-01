#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter a Number:";
   cin>>n; 

   cout<<"Table of the number is:\n";

   for(int i=1;i<=10;i++)
   { int table=n*i;
      cout<<n<<"*"<<i<<"="<<table<<endl;
   }
   return 0;
}