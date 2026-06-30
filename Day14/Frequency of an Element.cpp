#include<iostream>
using namespace std;
int freq(int arr[],int &n,int &target)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(target==arr[i])
        {
            count++;
        }
    }
    return count;

}
int main()
{
    int arr[]={10,20,40,10,20,30,100,50,70,30,20,10,45,35,46,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=20;

   cout<<"Frequency:"<<freq(arr,n,target);

    return 0;

}