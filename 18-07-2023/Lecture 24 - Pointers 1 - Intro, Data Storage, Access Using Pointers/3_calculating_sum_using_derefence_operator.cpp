#include<iostream>
using namespace std;
int main()
{
    int x, y;
    cout<<"Enter x and y"<<endl;
    cin>>x>>y;

    int *ptrx=&x;
    int *ptry=&y;

    int result; //we havenot initiated it...

    int *ptr_result = &result;
    *ptr_result = *ptrx + *ptry;

    cout<<"Sum : ";
    cout<<*ptr_result<<endl<<result; //*ptr_result stores value in result variable.. so both are same.
}

/*
Mistakes to avoid ...
int x=9;
int y=2;
int *ptr = &x;

ptr = 5; //this is WRONG... because we cant do this as ptr only stores address, not int value

*ptr = &y; //this is WRONG ... as we cant store addreess in value bucket(int)

cout<<&ptr; //it will return address of ptr (which already stores addreess in it =ptr)
cout<<ptr; //return address stored in ptr.... i.e. address of x;

*/