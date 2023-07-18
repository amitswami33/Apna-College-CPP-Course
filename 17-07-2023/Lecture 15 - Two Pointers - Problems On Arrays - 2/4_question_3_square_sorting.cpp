//Q.3 : Given an array 'a' sorted in non decreasing order, return an array of the squares of each number sorted in non decreasing order
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i=0; i<n;i++)
    {
        arr[i]=arr[i]*arr[i];
    }
    

    for (int i = 0; i < n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
        if(arr[i]>arr[j])
        {
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    
        }

    }

    for(int i=0; i<n; i++)
    {
        cout<< arr[i]<<" ";
    }
}