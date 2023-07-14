//print all prime numbers between a and b
//NESTED FOR LOOPS Example
#include<iostream>
using namespace std;
int main()
{
    int a,b,j;
    cout<<"Enter starting number"<<endl;
    cin>>a;
    cout<<"Enter final number"<<endl;
    cin>>b;
    cout<<endl;
    for(int i=a; i<=b;i++)
    {
        for( j=2; j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            cout<<j<<endl;
        }
    }
}