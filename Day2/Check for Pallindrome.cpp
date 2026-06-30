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
int rev(int n)
{ int rem,reverse=0;
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
    return reverse;

}
int main()
{
    int n;
    cout<<" enter the Number:";
    cin>>n;
    int x=rev(n);
    
    if(x==n)
    cout<<"Yes this number is a pallindrome.";
    else 
    cout<<"No this number is not a pallindrome.";
return 0;
}
