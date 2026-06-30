#include<iostream>
using namespace std;
int maximum(int x,int y)
{
    if(x>y)
    return x;
    else 
    return y;

}
int main()
{
    int a,b;
    cout<<"Enter two Number :";
    cin>>a>>b;
if(a==b)
{
    cout<<"Both are Equal.";
return 0;
}
    cout<<maximum(a,b);

    return 0;

}
