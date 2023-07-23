//Q.2) Given a number num and value k. Print k multiples.
#include<iostream>
using namespace std;

void f(int num, int k)
{
    if (k==1) {cout<<num<<" "; return;}
    f(num, k-1);
    cout<<(num*k) <<" ";
}

int main()
{
    f(3,8);
}