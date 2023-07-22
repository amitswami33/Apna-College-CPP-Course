//We can do 2 arithmetic operstions on pointers

#include<iostream>
using namespace std;
int main()
{
    int x=20;
    int *ptr=&x;

    //Increment
    cout<<ptr<<endl;
    cout<<ptr+1<<endl;
    cout<<ptr+2<<endl;
    cout<<ptr+3<<endl;
    

    //Decrement
    cout<<ptr-1<<endl; //...08-4 = ...04
    cout<<ptr-2;
}