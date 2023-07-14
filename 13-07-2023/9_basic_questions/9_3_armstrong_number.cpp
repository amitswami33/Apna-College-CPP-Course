#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    int n=num;
    int cube =0;
    int sum=0;
    while(n>0)
    {
        int lastdigit= n%10;
        cube= lastdigit *lastdigit*lastdigit;
        sum= sum+cube;
        n=n/10;
    }
    if(sum==num)
    {
        cout<<"Armstrong number!"<<endl;
    }
    else{cout<<"Not armstrong "<<endl;
    }
}