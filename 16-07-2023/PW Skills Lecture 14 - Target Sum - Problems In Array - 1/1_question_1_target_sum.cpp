/*
Q. Pattern : Target Sum
   Find the total number of pairs in the array whose sum is equal to the given value x.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size : "<<endl;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter X "<<endl;
    cin>>key;

    int cnt=0;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]+arr[j]==key)
            {   
                cnt++;
            }
        }
    }
    cout<<"Total Count = "<<cnt;

}