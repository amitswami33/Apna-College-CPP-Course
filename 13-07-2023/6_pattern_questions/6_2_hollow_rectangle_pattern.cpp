/*
    * * * *
    *     *
    *     *
    *     *
    * * * *
    
    rows :5
    column :4
*/

#include<iostream>
using namespace std;
int main()
{
    int rows =5;
    int column =4;
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=column; j++)
        {
            if(i==1 || i==5)
            {
                cout<<"* ";
            }
            else if(j==1 || j==4 )
            {
                cout<<"* ";
            }

            else{
                cout<<"  ";
            }
            

        }
        cout<<endl;
    }
}
