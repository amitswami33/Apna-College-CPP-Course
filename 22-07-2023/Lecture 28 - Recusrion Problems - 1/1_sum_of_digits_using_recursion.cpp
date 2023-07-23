//Q. Given an integer, find out the sum of its digits using recursion 
#include<iostream>
using namespace std;

int sum_of_dig(int n)
{
    
    for(int i=0; i<=9; i++)
    {
        if(i==n)
        {
            return n;
        }
    }
    
    return (sum_of_dig(n/10) + n%10);
    


}

int main()
{
    int n;
    cout<<"Enter number to find sum of its digits"<<endl;
    cin>>n;
    int ans;
    ans=sum_of_dig(n);
    cout<<ans<<endl;
}