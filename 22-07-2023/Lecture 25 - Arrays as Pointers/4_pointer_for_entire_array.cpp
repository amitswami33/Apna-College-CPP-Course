//a normal pointer will only point the base index ie.e. 0th index of array.
//but here, we will create a pointer for enitre array

#include<iostream>
using namespace std;
int main()
{
    int arr[3]={1,2,3};
    int (*ptr) [3]= &arr; //pointer for array of 3 size... it will basically store 0th index address
    
    cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<endl; //So, ptr variable will point entire array

    
}