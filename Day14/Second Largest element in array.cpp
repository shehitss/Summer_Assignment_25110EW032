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
    int largest=arr[0];
    int secondLargest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(largest<arr[i])
        {
        secondLargest=largest;
        largest=arr[i];
        }
       
    }
    cout<<"Larget:"<<largest<<endl;
    cout<<"Second Largest:"<<secondLargest;

    return 0;

   
}