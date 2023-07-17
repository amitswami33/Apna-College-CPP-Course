//Check if given elements in vector are sorted or not

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    
    for(int i=0; i<5; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    int ptr=0;
    for(int i=0; i<v.size()-1; i++)
    {
        if(v[ptr]<v[ptr+1])
        {
            ptr++;
        }
        else{
            cout<<"Not Sorted"<<endl;
            break;
        }
    }
    if(ptr==v.size()-1)
    {
    cout<<"Sorted! "<<endl;
    }
}