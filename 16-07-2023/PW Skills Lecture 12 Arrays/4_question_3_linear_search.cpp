//Q.3 Linear Search - search for an fiven element in aarray. if it present return the index or else return -1
#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }

    int key;
    bool flag= false;
    cout<<"Enter number to search : ";
    cin>>key;
    for(int i=0; i<5; i++)
    {
        if(key == arr[i])
        {
            cout<<"Present at index : "<< i<<endl;
            flag=true;
            
        
        }
        
        
    }
    if(flag==false)
        {
            cout<<"-1 : Not Found "<<endl;
        }
}