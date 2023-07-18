#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int arr2[n];
    int k;
    cout<<"Enter k"<<endl;
    cin>>k;
    k=k%n;
    int j=0;
    for(int i=n-k; i<n; i++)
    {
        arr2[j]=arr[i];
        j++;
    }
    for(int i=0; i<=k; i++)
    {
        arr2[j++]=arr[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr2[i]<<" ";
    }

}