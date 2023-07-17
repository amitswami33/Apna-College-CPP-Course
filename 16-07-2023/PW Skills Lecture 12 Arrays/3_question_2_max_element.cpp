//Que.2 Find maximum element in the array
#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cout<<"Enter Size of array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>array[i];

    }

    int max=array[0];
    for(int i=1; i<n; i++)
    {
        if(array[i]> max)
        {
            max=array[i];
        }
    }
    cout<<"Maximum element in the array : "<<max<<endl;
}