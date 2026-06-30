#include<iostream>
using namespace std;
int reverseHelper(int x,int rev)
{
      if (x == 0) {
        return rev;
    }
     int lastDigit = x % 10;
    rev = (rev * 10) + lastDigit;
    
    return reverseHelper(x / 10, rev);
}
int reverse(int x)
{return reverseHelper(x,0);

}
int main()
{
    int n;
    cin>>n;

    cout<<reverse(n);
    return 0;
}