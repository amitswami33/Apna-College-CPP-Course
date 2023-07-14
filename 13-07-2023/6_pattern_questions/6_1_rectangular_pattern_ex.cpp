/*
    * * * *
    * * * *
    * * * *
    * * * *
    * * * *
    rows : 5, column : 4
*/

#include<iostream>
using namespace std;
int main()
{
    int row=5;
    int column =4;
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=column; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}