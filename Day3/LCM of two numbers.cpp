#include<iostream>
using namespace std;
int main()
{
    int a,b,x,y,z;
    cout<<"Enter two Numbers:";
    cin>>a>>b;
    z=max(a,b);
    for(int i=z;i<=a*b;i++)
    { 
       if(i%a==0 and i%b==0)
       {
        cout<<"LCM of Numbers:"<<i;
        break;
       }

    }
    return 0;
}