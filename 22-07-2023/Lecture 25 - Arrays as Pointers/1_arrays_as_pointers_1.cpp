//IMP And Intresting concept till now...
//Array name arr is nothing but address of 0th index of array arr. i.e. arr==&arr[0]
#include<iostream>
using namespace std;
int main()
{
    int arr[3]={12,5,6};
    int* ptr = &arr[0];

    cout<<ptr<<" "<<arr<<endl;  //Here, arr is nothing but address of 0th index element of array arr. so, arr and ptr is same address i.e. arr=&arr[0]==ptr
    cout<<*ptr<<" "<<*arr<<endl; //as ptr and arr stores same address, their value also same 2 same

    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    cout<<*(arr+0)<<" "<<*(arr+1)<<" "<<*(arr+2)<<endl; // So, interestingly arr[0]== *(arr+0) == *arr and arr[1]==*(arr+1)

}