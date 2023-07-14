#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    int i;
    if(n==1)
    {
        cout<<"Non prime"<<endl;
    }
    for(i=2; i<n;i++)
    {
        if(n%i==0 )
        {
            cout<<"It is not prime number"<<endl;
            break;
        }
        

    }
    if(i==n)
    {
        cout<<"It is prime number"<<endl;
    }
    
}