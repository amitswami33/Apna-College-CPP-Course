//Q.3 : Find the sum of values of the array [2,3,5,20,1] using recursions.

#include<iostream>
using namespace std;
int f(int* arr, int n, int idx)
{
    if (idx==n-1) return arr[idx]; //we only have one element left here
    
    return (arr[idx] + f(arr,n, idx+1));
   
}

int main()
{
    int arr[5]={2,3,5,20,1};
    int n=5;
    int result=f(arr, n, 0);
    cout<<result<<endl;

}

