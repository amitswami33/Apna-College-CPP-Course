/*
Pattern : Prefix Sum
Q2. Check if we can partition the array into two subarrays with equal sum. More formally, check that the prefix sum of a part of the array is equal to the suffix sum of rest of the array

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int total=0;
    for(int i=0; i<n;i++)
    {
        total=total+arr[i];
    }

    bool flag=false;
    for(int ptr=0; ptr<n; ptr++)
    {
        int pref=0;
        int suf=0;
        
        
       // for(int j=0; j<ptr; j++)
        //{
            pref=pref+arr[ptr]; //arr[j]
        //}
        //for(int j=ptr; j<n; j++)
        //{
            suf=total-pref; //arr[j]
        //}
        if(pref==suf)
        {
            flag=true;
            cout<<"True"<<endl;
            break;
        }
        
    }
    if(flag==false)
    {
        cout<<"False"<<endl;
    }

   

}