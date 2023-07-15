#include<iostream>
using namespace std;
int octalToDecimal(int n)
{
    int a=1;
    int x=0;
    while(n>0){
        int lastdig=n%10;
        x=x+lastdig*a;
        a=a*8;
        n=n/10;
    }
    cout<<x<<endl;;
}

int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    octalToDecimal(n);
}