//input and output of 2d array
#include<iostream>
using namespace std;
int main()
{
    int l,m;
    cout<<"Enter row and column number "<<endl;
    cin>>l>>m;
    int arr[l][m];
    cout<<"Enter element"<<endl;
    for(int i=0; i<l; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"2D Array : "<<endl;
    
    for(int i=0; i<l; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}