// & is adressof operator, which gives address of any variable... ex: &a;
// * is star or astrick , which stores that address in pointer variable

#include<iostream>
using namespace std;
int main()
{
    int x=10;
    float y =7.1;

    int *ptr=&x;
    float *ptr2 = &y;

   cout<<&x<<endl;

    cout<<ptr<<endl; //same as &x
    cout<<ptr2<<endl;

    
    int *ptr3;         //we haven't stored any address of any variable here 
    cout<<ptr3<<endl; //still it Gives us any random address from memory

    int z=90;
    ptr3=&z;
    cout<<ptr3<<endl;
}