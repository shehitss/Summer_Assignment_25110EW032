#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Blocks:";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int even=0;
    int odd=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
    cout<<"Even:"<<even<<"\n";
    cout<<"Odd:"<<odd;
}