//Looping in Vectors... 1.For Loop 2.For Each Loop 3.While Loop
//Also ex of v.insert(x,y), v.begin()+a, v.end()-b , v.erase(z)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;          //vector<int> v(5);
    
    //For Loops :
    cout<<"Enter elements to push"<<endl;
    for(int i=0; i<5; i++)  //Let us add 5 elements
    {
        int ele;
        cin>>ele;
        //cin>>v[i]     ... Same like array tev=chnique... applicable only if size of vector is mentioned
        v.push_back(ele);
    }

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+2, 6);

    //For Each Loop
    for(int ele : v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    v.erase(v.end()-2);

    //while loop
    int idx=0;
    while(idx<v.size())
    {
        cout<<v[idx]<<" ";
        idx++;
    }
}
