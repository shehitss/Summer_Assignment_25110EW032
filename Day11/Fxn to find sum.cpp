#include<iostream>
void sum(int,int);
using namespace std;
int main()
{
    int a,b;

    cout<<"Enter two Number:";
    cin>>a>>b;

    sum(a,b);
    return 0;

}
void  sum(int x,int y)
{
    cout<<(x+y);
}