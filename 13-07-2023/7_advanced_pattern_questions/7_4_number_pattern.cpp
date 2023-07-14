/*
        1
       1 2
      1 2 3
     1 2 3 4
    1 2 3 4 5

    n=5
*/

#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int p=1;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<p<<" ";
            p++;
        }
        p=1;
        for(int j=1; j<=n-1; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}