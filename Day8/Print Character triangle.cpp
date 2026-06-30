#include<iostream>
using namespace std;
int main()
{
    char n='E';

    for(char i='A';i<=n;i++)
    {
        for(char j='A';j<=i;j++)
        cout<<j<<" ";

        cout<<"\n";
    }
    return 0;
}