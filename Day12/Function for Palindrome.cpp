#include<iostream>
using namespace std;
bool isPalindrome(int n)
{int x=n;
    int reverse=0;
   for(int i=1;x>0;i++)
   {int  rem=x%10;
        x=x/10;
        reverse=(10*reverse)+rem;
   }
   if(reverse==n)
   {
    return true;
   }
   else
   {
    return false;
   }
}
int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;
isPalindrome(n);
    if(isPalindrome(n)==true)
    cout<<"Palindrome";
    else
    cout<<"Not palindrome";


    return 0;
}