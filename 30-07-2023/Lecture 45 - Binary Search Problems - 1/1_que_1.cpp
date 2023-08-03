//First and last occurence 
//input: Array [1,2,3,3,3,5,11]... output: [2,4]
#include<bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> &vec, int n, int x)
{
    int lo=0;
    int hi=n;
    int ans=-1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(vec[mid]==x)
        {
            ans=mid;
            hi=mid-1;
        }
        else if(vec[mid]<x)
        {
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return ans;

}

int lastOcc(vector<int> &vec, int n, int x)
{
    int lo=0;
    int hi=n;
    int ans=-1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(vec[mid]==x)
        {
            ans=mid;
            lo=mid+1;
        }
        else if(vec[mid]<x)
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
    vector<int> vec {1,2,3,3,3,5,11};
    int n = vec.size()-1;
    int x;
    cout<<"Enter x ";
    cin>>x;
    cout<<"["<<firstOcc(vec,n,x)<<","<<lastOcc(vec,n,x)<<"]"<<endl;

}