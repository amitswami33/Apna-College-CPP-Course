//Q.1 Sort an array consisting of only 0's and 1's

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter 0's and 1's"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int sort[n];
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            sort[cnt]=0;
            cnt++;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
            sort[cnt]=1;
            cnt++;
        }
    }
    cout<<"Sorted Array : "<<endl; 
    for(int i=0; i<n; i++)
    {
        cout<<sort[i]<<" ";
    }

}