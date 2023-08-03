//Q.1) Find the first occurence of a given element x, given array is sorted. If no occurence then return -1.
//ex: arr={2,5,5,5,6,6,8,9,9,9} , X=5; output:1
#include<iostream>
using namespace std;
int firstOccurence(int arr[], int hi, int x)
{   
    int lo=0;
    
    int ans=-1;
    while(lo<=hi)
    {
        int mid = (lo+hi)/2;
        if(arr[mid]==x)
        {
            ans= mid;
            hi=mid-1;
        }
        else if(arr[mid]<x)
        {
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
        
    }
    return ans;

}
int main()
{
    int x;
    int arr[]={2,5,5,5,6,6,8,9,9,9};
    int n=(sizeof(arr)/sizeof(arr[0]))-1;
    cout<<"Enter element x "<<endl;
    cin>>x;
    cout<<firstOccurence(arr,n, x)<<endl;


}