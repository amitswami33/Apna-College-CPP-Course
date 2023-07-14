/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

n=5
*/

#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int p=1;
    for(int i=1; i<=n;i++)
    {
        for(int j=n; j>=i;j--)
        {
            cout<<p<<" ";
            ++p;
        }
        p=1;
        cout<<endl;
    }
}