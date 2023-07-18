/*
Pattern : Prefix Sum
Q1. Given array A , return the prefix sum/ running sum in the array without creating a new array
*/#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENter array elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+arr[i];
        arr[i]=sum;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}