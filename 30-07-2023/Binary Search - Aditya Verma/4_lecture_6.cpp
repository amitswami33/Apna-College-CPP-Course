//Count of an element in a sorted array
#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int x)
{
    int lo=0;
    int hi=n;
    int ans=-1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x)
        {
            ans=mid;
            hi=mid-1;
        }
        else if(arr[mid]>x)
        {
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return ans;

}

int lastOcc(int arr[], int n, int x)
{
    int lo=0;
    int hi=n;
    int ans=-1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x)
        {
            ans=mid;
            lo=mid+1;
        }
        else if(arr[mid]>x)
        {
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return ans;
}

int main()
{
    int arr[]={2,5,10,10,10,10,20};
    int n=(sizeof(arr)/sizeof(arr[0]))-1;
    cout<<"Enter elment to find occurences : ";
    int x;
    cin>>x;
    cout<<"Count = "<<lastOcc(arr,n,x) - firstOcc(arr,n,x)+1<<endl;
}