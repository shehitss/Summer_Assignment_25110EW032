#include<iostream>
using namespace std;
int main()
{
    int start,end,rem;
    cout<<"Enter range:\n";
    cin>>start;
    cout<<"to\n";
    cin>>end;

    for(int x = start; x <= end; x++)
    {
        for(int y=2;y<x;y++)
        {
            rem=x%y;
            if(rem==0)
            break;

        }
        if(rem!=0)
        cout<<x<<" ";

    }
    return 0;
}