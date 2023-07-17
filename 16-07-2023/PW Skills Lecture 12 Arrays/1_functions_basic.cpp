//basic input and outpit taking methods of loops
//FOR EACH LOOPS
#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    //for loops:
    for(int i=0; i<=4; i++)
    {
        cin>>arr[i];

    }
    for(int i=0; i<=4; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"For each loop : "<<endl;
    

    //for each;
    for(int &ele : arr)
    {
        cin>>ele;
    }
    for(int ele : arr)
    {
        cout<<ele<<" ";
    }
}