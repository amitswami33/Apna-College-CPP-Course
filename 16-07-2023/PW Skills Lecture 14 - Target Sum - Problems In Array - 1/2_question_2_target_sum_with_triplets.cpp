/*
Q 2. Pattern : Target Sum Triplet
   Find the total number of triplets from the array whose sum is equal to the given value x.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size : "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter elements to array : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter X "<<endl;
    cin>>key;

    int cnt=0;

    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==key)
                {   
                    cnt++;
                }
            }
        }
    }
    cout<<"Total Count = "<<cnt;

}