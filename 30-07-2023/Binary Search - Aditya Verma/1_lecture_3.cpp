//descending sorted order of array is given...
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
    vector<int> input = {200,141,95,77,65,54,45,30};
    int target =45;
    cout<<"Index is : "<<binarySearch(input, target)<<endl;

}