// Time Complexity
//Q. You are given number x and y, (1<=x<=10^5) (x<=y<=10^8). Calculate sum of all elements in the range [x, y].

#include<iostream>
using namespace std;
int sum_of_range(int x, int y)          //BruteForce Solution
{
    int sum=0;
    for(int i=x; i<=y; i++)
    {
        sum += i;
    }
    cout<<sum<<endl;
}

int sum_of_range_optimised(int x, int y)    //OPTIMISIED ANSWER
{
    int n=(y-x+1);
    int a = x;
    int d = 1;
    int sum = n * ((2*a) + (n - 1)*d) / 2; 
    cout<<sum<<endl;
}

int main()
{
    sum_of_range(2,6);
    sum_of_range_optimised(2,6);
    return 0;
}