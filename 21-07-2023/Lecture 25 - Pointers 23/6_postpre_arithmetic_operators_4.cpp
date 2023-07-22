//case 4:
//preincrement 2
#include<iostream>
using namespace std;
int main()
{
    int arr[2]={8,2};
    int *ptr = &arr[0];
    cout<<++*ptr<<endl;             //first dereference ptr and then increment it by 1
    cout<<arr[0]<<" "<<arr[1]<<endl; //change in array
}