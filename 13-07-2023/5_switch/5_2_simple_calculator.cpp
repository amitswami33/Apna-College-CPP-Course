#include<iostream>
using namespace std;
int main()
{
    float a , b;
    float c;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    int ch;
    cout<<"1.Addition \n2.Subtraction \n3.Multiplication \n4.Division"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1 : cout<<"Addition is : "<<a+b<<endl;
        break;
        case 2 : cout<<"Subtraction is : "<<a-b<<endl;
        break;
        case 3 : cout<<"Multiplication is : "<<a*b<<endl;
        break;
        case 4 : c=a/b; cout<<"Division is : "<<c<<endl;
        break;
        default : cout<<"Wrong input"<<endl;
    }
}