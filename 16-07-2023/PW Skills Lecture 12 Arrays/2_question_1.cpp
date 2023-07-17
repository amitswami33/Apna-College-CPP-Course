//functions Que 1. Calculate the sum of all elements in array
#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter array elements "<<endl;
    for(int i=0; i<5;i++)
    {
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0; i<=4; i++)
    {
        sum= sum+arr[i];
    }
    cout<<"The sum of elements : "<<sum<<endl;

}