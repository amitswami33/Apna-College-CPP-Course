//Q. Write a program to display transposeof matrix entered by the user.
#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter no of rows and col"<<endl;
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter array elements : "<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Before Transpose : "<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"After Transpose : "<<endl;
    int trans[c][r];
    for(int i =0 ; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            trans[i][j]=arr[j][i];
        }
    }
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }

}