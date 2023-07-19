// Space complexity Optimisation exmpl ...
//Q. Print nth fibonacci element : 0,1,1,2,3,5,8,13,21,.....
//1st elmnt=0 , 2nd=1, 3rd=1, 4th =2, 5th =3 , 6th =5....
#include<iostream>
using namespace std;

int fib(int n)      //BruteForce solution ... Space Complexity : O(n), T.C.=O(n)
{
    
    int arr[n];
    int a=0;
    int b=1;
    int sum=0;
    arr[0]=0;
    arr[1]=1;
    for(int i=2; i<n ; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n-1];
}


int fib_optimised(int n)  //Optimised soln.... Space comp. = O(1), Time comp = O(n)
{
    int a=0;
    int b=1;
    int c=1;
    if(n==0 || n==1)
    {
        return n;
    }
    for(int i=2; i<n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;


}


int main()
{   
   cout<< fib(5)<<endl;
   cout<< fib_optimised(5)<<endl;
    
}