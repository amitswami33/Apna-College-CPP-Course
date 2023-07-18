/*
Pattern : Second Largest Element
Q. 3. Find the second largest element in the given array

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

    int max =0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
                
        }
    }

for(int i=0; i<n; i++)
{
    if(max==arr[i])
    {
        arr[i]=-1;
    }
}
    max=0;
   
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"The second largest element in the array : "<<max;
}