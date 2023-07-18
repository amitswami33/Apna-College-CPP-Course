//Q.2 Given an array of integers 'a', move all the even integers at the beginning of the array followed by all the odd integers.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ptr1 = 0;
    int ptr2 = n - 1;
    while (ptr1 < ptr2)
    {
        if (arr[ptr1] % 2 == 0)
        {
            ptr1++;
        }
        else if (arr[ptr2] % 2 == 1)
        {
            ptr2--;
        }
        else
        {
            int temp = arr[ptr1];
            arr[ptr1] = arr[ptr2];
            arr[ptr2] = temp;
            ptr1++;
            ptr2--;
        }
    }

    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
