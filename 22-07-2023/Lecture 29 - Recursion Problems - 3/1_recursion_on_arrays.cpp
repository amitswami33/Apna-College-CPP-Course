//Q.1 : Given an array, print all the elements of array using RECURSION
#include<iostream>
using namespace std;
void f(int n, int arr[], int idx=0) //void f(int n, int *arr, int idx)
{
    if(idx==n)
    {
        
        return ;
    }
    cout<<arr[idx]<<" ";
    f(n, arr, idx+1);

}

int main()
{
    int n;
    cout<<"Enter Size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int idx=0;
    cout<<"Array : "<<endl;
    f(n, arr, idx );    //f(n, arr,0);
}