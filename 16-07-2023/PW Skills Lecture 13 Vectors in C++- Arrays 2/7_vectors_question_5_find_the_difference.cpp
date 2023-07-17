//Q. Find the difference between the sum of elements at even indices to the sum of elements at odd indices
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    
    cout<<"Enter elements : "<<endl;
    for(int i=0; i<10; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    int evensum=0;
    int oddsum=0;
    for(int i=0; i<v.size(); i++)
    {
        if(i%2==0)
        {
            evensum += v[i];
        }
        else{
            oddsum += v[i];
        }
    }
    cout<<"The Difference = "<<(evensum-oddsum)<<endl;

}