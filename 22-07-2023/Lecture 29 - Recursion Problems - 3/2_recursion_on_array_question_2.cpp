//Q.2 : Print the max value of array [3,10,3,2,5]
#include<iostream>
using namespace std;

int f(int* arr, int n, int idx)
{
    if (idx==n-1) return arr[idx]; //we only have one element left here
    
    return max(arr[idx], f(arr,n, idx+1));
   
}

int main()
{
    int arr[5]={3,10,3,2,115};
    int n=5;
    int result=f(arr, n, 0);
    cout<<result<<endl;

}