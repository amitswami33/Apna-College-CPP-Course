//Q. Given a number n. Find the incresing sequence from 1 to n without using loops.
#include<iostream>
using namespace std;

void seq(int n)
{
    if(n<=1) {cout<<n<<" "; return ;}
    seq(n-1);
    cout<<n<<" ";
}

int main()
{
    int n=5;
    seq(5);
}