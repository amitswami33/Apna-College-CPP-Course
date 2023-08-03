#include<iostream>
using namespace std;

int partition(int arr[], int first, int last)
{
    int i=first-1;
    int j=first;
    int pivot=arr[last];
    for(;j<last; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1],arr[last]);
    return i+1;


}

void QuickSort(int arr[], int first, int last)
{
    if(first>=last)
        return ;
    
    int pi = partition(arr, first, last);
    QuickSort(arr, first, pi-1);
    QuickSort(arr, pi+1, last);

}


int main()
{
    int arr[] = {12, 32,14,5,66,54,71,22,6,37,23,47,26};
    int n= sizeof(arr)/sizeof(arr[0]);

    QuickSort(arr, 0, n-1);

    for(int i=0; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}