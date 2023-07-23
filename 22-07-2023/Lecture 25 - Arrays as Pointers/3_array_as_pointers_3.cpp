#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int * ptr = arr+2; //arr+2 == address of arr[2]; 
    cout<<*ptr<<endl; // will print address of ptr by dereferencing

    *ptr++; //postincrement of address by +4... so ptr = ptr+4 ..i.e. arr[3]
    cout<<*ptr<<endl; //dereferencing ptr (incremented)... so arr[3] will printed
}