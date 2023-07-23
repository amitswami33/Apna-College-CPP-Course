#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return (fib(n-1) + fib(n-2));
}
int main()
{
    int n;
    cout<<"Enter term (n)"<<endl;
    cin>>n;
    cout<<"nth term in fib series : ";
    cout<<fib(n)<<endl;
}