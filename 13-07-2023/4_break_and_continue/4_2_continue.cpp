#include<iostream>
using namespace std;
int main()
{
    //print numbers not divisible by 3
    for(int i=1; i<=100; i++)
    {
        if(i%3==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
}