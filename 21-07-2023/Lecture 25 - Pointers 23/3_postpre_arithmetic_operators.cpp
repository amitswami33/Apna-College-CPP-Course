//PostPre Arithmetic Operators (ptr++)
//Case 1 :

#include<iostream>
using namespace std;
int main()
{
    int arr[2] = {1, 19};
    int *ptr = &arr[0];

    cout<<ptr<<" "<<*ptr<<endl;
    cout<<*ptr++<<endl; //Right To Left ... first ptr++...then dereferencing.. i.e.*(ptr++)

    cout<<arr[0]<<" "<<arr[1]<<endl;
    cout<<ptr<<" "<<*ptr<<endl;

}