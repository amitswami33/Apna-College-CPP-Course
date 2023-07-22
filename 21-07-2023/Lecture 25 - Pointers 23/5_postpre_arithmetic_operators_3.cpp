//Preincre.. 
//case 3
#include<iostream>
using namespace std;
int main()
{
    int arr[2] = {7,5};
    int *ptr = &arr[0];
    cout<<*++ptr<<endl;                 //increment address by 4 byte then dereference incremented address
    cout<<arr[0]<<" "<<arr[1]<<endl;    //No change in array
}