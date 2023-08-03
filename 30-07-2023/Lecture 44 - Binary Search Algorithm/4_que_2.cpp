//Q.Find the square root of a given non-negative number X. Round it off to nearest floor integer...
//1)Input:11, Output:3 2)Input:4, Output:2
#include<iostream>
using namespace std;

int squareRoot(int x)
{
    int lo=1;
    int hi=x;
    int ans=-1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(mid*mid<=x)
        {
            ans= mid;
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
    cout<<"Enter X"<<endl;
    cin>>x;
    cout<<squareRoot(x)<<endl;

}