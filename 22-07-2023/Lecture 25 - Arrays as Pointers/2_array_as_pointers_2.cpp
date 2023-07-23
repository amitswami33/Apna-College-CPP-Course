#include<iostream>
using namespace std;
void process(int *arr, int n)
{   
    for(int i=0; i<n; i++)              
    {
        cout<< *(arr+i)<<" ";
    }

    /* SAME TO :
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
    */
   *(arr+0)= 15; //changes the 0th index here... now see main function after calling process function

}

int main()
{
    int arr[3]={5,1,4};
    
    process(arr ,3);

    cout<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<arr[i]<<" ";
    }
}