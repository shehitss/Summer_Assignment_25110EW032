#include<iostream>
using namespace std;
int pow(int x)
{  int pow=1;
    for(int i=1;i<=x;i++)
    {  
        pow=pow*10;
    }
    return pow;
    
}
int main()
{
    int n,rem,reverse=0;
    cout<<"Enter a number:";
    cin>>n;

    while(n>0)
    {
        rem=n%10;
        n=n/10;
        int x=n;
        int i=0;
        while(x>0)
        {
            x=x/10;
            i++;
            
        }
        reverse= reverse+(rem*pow(i));//pow is a fxn defined before main function.
    }
    cout<<"Reverse of Number is:"<<reverse;
    return 0;
}