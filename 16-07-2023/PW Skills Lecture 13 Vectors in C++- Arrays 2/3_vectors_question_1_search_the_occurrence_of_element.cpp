//Q. Find the last occurrence of an element x in a given vector

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(5);

    cout<<"Enter elements"<<endl;
    
    for(int i=0; i<v.size(); i++)
    {
        cin>>v[i];
    }

    cout<<"Enter element to occurrence"<<endl;
    int key;
    cin>>key;

    int max=-1;
    for(int i=v.size()-1; i>=0; i--)
    {
        if(v[i]==key)
        {
            max=i;
            cout<<"Index : "<<max<<endl;
            break;
        }
        
    }
    if(max==-1){

        cout<<"Not Found"<<endl;
    }
}