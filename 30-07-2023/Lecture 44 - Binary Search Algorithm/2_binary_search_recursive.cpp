//recursive approach
#include<bits/stdc++.h>
using namespace std;


int binarySearchRecursive(vector<int> &input, int target, int lo, int hi)
{
    if(lo>hi) return -1;
    int mid=(lo+hi)/2;
    if(input[mid]==target) return mid;
    if(input[mid]<target)
    {
        return binarySearchRecursive(input, target, mid+1, hi);
    }
    else{
        return binarySearchRecursive(input, target, lo , mid-1);

    }

}

int main()
{
    vector<int> input = {2,4,5,7,15,24,45,50};
    int target =15;
    cout<<"Index is : "<<binarySearchRecursive(input, target, 0 ,8)<<endl;

}