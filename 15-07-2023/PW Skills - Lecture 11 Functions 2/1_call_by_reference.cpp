//we use & ampersand to show pass by reference
//p and q access same memory address in memory , and hence, have same value.
#include<iostream>
using namespace std;

void changeValue(int &y, int &z)
{
    y=100;
    z=101;
}

int main()
{
    int p=5;
    int &q=p;
    
    cout<<"Value of p : "<<p<<endl;
    cout<<"Value of q : "<<q<<endl;
    cout<<"Address of p : "<<&p<<endl; 
    cout<<"Address of q : "<<&q<<endl; //same address p and q
    
    int a=5;
    int b=6;

    cout<<"Value of a first: "<<a<<endl;
    cout<<"Value of b first: "<<b<<endl;

    changeValue(a,b);
    cout<<"Value of a after change: "<<a<<endl;
    cout<<"Value of b after change: "<<b<<endl;

    
}