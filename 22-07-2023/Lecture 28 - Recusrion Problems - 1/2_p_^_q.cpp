//Q.2 : Given, two numbers p and q, find the value of p^q using a recursive function.

#include<iostream>
using namespace std;
int f(int p, int q)
{
    if(q==0)
        return 1;
    
    return (p* f(p,q-1));
}

int main()
{
    int p,q;
    cout<<"Enter p and q"<<endl;
    cin>>p>>q;
    int result = f(p,q);
    cout<<result<<endl;
}
