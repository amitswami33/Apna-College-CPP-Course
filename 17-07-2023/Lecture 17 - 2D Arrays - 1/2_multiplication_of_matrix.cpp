//q.1 : write a program to display multiplication of matrix
#include<iostream>
using namespace std;
int main()
{
    int r1,c1;
    cout<<"Enter row no and col no. "<<endl;
    cin>>r1>>c1;
    int arr1[r1][c1];
    cout<<"Enter array1 elements"<<endl;
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1 ; j++)
        {
            cin>>arr1[i][j];
        }
    }
    int r2, c2;
    cout<<"Enter 2nd array row and col no. "<<endl;
    cin>>r2>>c2;
    int arr2[r2][c2];
    if(c1!=r2)
    {
        cout<<"Multiplication not possible"<<endl;
        return 0;
    }
    cout<<"Enter array 2 elements"<<endl;

    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2 ; j++)
        {
            cin>>arr2[i][j];
        }
    }

    cout<<"Multiplication : "<<endl;
    int arr3[r1][c2];
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            arr3[i][j]=0;
            for(int k=0; k<r2; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
            
        }
    }

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cout<<arr3[i][j]<<" ";

        }
        cout<<endl;
    }

}