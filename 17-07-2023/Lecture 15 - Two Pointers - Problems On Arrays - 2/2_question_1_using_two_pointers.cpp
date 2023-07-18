// Sort using TWO POINTERS (Swapping last and first pointer in array);
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter 0's and 1's"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int ptr=0;
    int ptr2=n-1;

    while(ptr2>=ptr)
    {
        if(arr[ptr]==1 && arr[ptr2]==0)
        {
            int temp=arr[ptr2];
            arr[ptr2]=arr[ptr];
            arr[ptr]=temp;
            ptr2--;
            ptr++;
        }
        if(arr[ptr]==1 && arr[ptr2]==1)
        {
            ptr2--;
        }
        if(arr[ptr]==0 && arr[ptr2]==1)
        {
            ptr++;
            ptr2--;
        }
        if(arr[ptr]==0 && arr[ptr2]==0)
        {
            ptr++;
        }
    }

        cout<<"Sorted Array : "<<endl;

        for(int i=0; i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
}

