//Very Easy Concept. In other conversions only one line is different, all other same.

#include<iostream>
using namespace std;
int binaryToDecimal(int n)
{
    int a=1;
    int x=0;
    while(n>0){
        int lastdig=n%10;
        x=x+lastdig*a;
        a=a*2;                  //In other conversions change *2
        n=n/10;
    }
    cout<<x<<endl;;
}

int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    binaryToDecimal(n);
}