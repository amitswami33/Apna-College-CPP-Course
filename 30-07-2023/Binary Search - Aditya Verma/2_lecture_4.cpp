//Order Agnostic Search.... i.e. order not told... i.e. ascending or descending is not specified
//Only one extra condition is used in main function for this problem
#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &input, int target )
{
    //define seatchspace
    int lo=0; //start of searchspace
    int hi =input.size()-1;
    while(lo<=hi)
    {
        //calc mid for ss
        int mid= (lo+hi)/2;
        if(target==input[mid]) return mid;
        else if(input[mid]<target)
        {
            //discard left part
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return -1;
}

int descBinarySearch(vector<int> &input, int target )
{
    //define seatchspace
    int lo=0; //start of searchspace
    int hi =input.size()-1;
    while(lo<=hi)
    {
        //calc mid for ss
        int mid= (lo+hi)/2;
        if(target==input[mid]) return mid;
        else if(input[mid]<target)
        {
            //discard left part
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return -1;
}


int main()
{
    vector<int> input = {2,4,5,7,15,24,45,50};
    int target =15;
    if(input[0]<input[1])
    {
    cout<<"Index is : "<<binarySearch(input, target)<<endl;
    }
    else{
        cout<<descBinarySearch(input,target)<<endl;
    }
}