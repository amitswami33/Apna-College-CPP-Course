//iterative approach
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



int main()
{
    vector<int> input = {2,4,5,7,15,24,45,50};
    int target =15;
    cout<<"Index is : "<<binarySearch(input, target)<<endl;

}