#include<iostream>
using namespace std;
void perfectNumber(int &n)
{ 
    int num1;
    int num2;
    
    for(int i=1;i<=n;i++)
    {
         num1=i;
         int sum=0;
         for(int j=1;j<num1;j++)
         {
            if(num1%j==0)
            {
                 num2=j;
                sum=sum+num2;
            }
         }
        if(sum==num1)
        {
            cout<<num1<<"  ";
        }
    }
}
int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;

    perfectNumber(n);


}

