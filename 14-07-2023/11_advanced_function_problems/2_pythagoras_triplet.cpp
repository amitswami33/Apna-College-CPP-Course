#include<iostream>
using namespace std;
int maxi(int a , int b, int c)
{
    if(a>b)
    {
        if(a>c)
        {
            return a;
        }
        else{
            return c;
        }
    }
    else if(b>a)
    {
        if(b>c)
        {
        return b;
        }
        else{
            return c;
        }
    }
    else{
        return c;
    }
}
void pyth(int a, int b, int c)
{
    int maxx = maxi(a,b,c);
    int y;
    int z;
    if(maxx==a)
    {
        y=b;
        z=c;
    }
    else if(maxx==b)
    {
        y=a;
        z=c;
    }
    else{
        y=a;
        z=b;
    }



    if(maxx*maxx==(y*y) + (z*z) )
    {
        cout<<"It is a Pythagorean Triplet."<<endl;

    }
    else{
        cout<<"It is not a pythagorean triplet"<<endl;
    }
}
int main()
{
    int a, b, c;
    cout<<"Enter 3 numbers"<<endl;
    cin>>a>>b>>c;
    pyth(a,b,c);
}