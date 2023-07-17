#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    cout<<"Enter elements"<<endl;
    
    for(int i=0; i<5; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    cout<<"Enter element to occurrence"<<endl;
    int key;
    cin>>key;

    int cnt=0;
    for(int i=0; i<v.size(); i++)
    {
        if(key==v[i])
        {
            cnt++;
        }
    }
    cout<<"Total Coount : "<<cnt<<endl;

}