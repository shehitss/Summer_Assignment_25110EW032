#include<iostream>
using namespace std;
int main()
{
    char n;
    cout<<"Enter an Alphabet:";
    cin>>n;

    for(char i=1;i<=n;i++)
    {
        for(char j='A';j<=i;j++)
        cout<<i<<" ";

        cout<<"\n";
    }
    return 0;
}