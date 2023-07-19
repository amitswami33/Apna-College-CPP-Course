// * is dereference operator, used in RHS or cout statements, we csn also call it astrick or valueAt operator
// NOTE : *ptr is value of x.

#include<iostream>
using namespace std;
int main()
{
    int x=10;

    int *ptr=&x;
    
    cout<<*ptr<<endl;

    *ptr=50;    //we can also change any value ny using *
    cout<<x<<endl;
    cout<<*ptr<<endl;

    int value = *ptr; //we can also give value of * to other variables
    cout<<value<<endl; 

}