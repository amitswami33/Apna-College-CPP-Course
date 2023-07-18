/*
Pattern : Unique Element
Q. 3. Find the unique element in the given array where all the elements are being repetead twice with one value being unique

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
    bool flag=false;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                arr[i]=arr[j]=-1;
                break;
            }
        }
        
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=-1)
        {
            cout<<"Unique Element : "<<arr[i]<<endl;
        }
    }
    
}
