/*
    * * * * *
    * * * *
    * * *
    * *
    * 
    
    n=5
*/

#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=1; i<=n; i++)
    {
        for(int j=n; j>=i; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    //OR 2nd method
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}