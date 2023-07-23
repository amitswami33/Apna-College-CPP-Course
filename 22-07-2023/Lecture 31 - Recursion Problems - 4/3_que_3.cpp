//Q.3 Given a number n. Find the sum of natural numbers till n but alternate signs.
//i.e. n=5 , then 1-2+3-4+5 =3

#include<iostream>
using namespace std;
int f(int n)
{
    if (n==0)
    return 0;

    return f(n-1) + ((n%2==0) ? (-n):(n));

}

int main()
{
    cout<<f(5)<<endl;
}