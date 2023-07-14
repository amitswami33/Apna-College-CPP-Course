//saying hello in different ways
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter A/B/C/D"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 'A' : cout<<"Hello!"<<endl;
        break;

        case 'B' : cout<<"Hola!"<<endl;
        break;

        case 'C' : cout<<"Namaskar"<<endl;
        break;

        case 'D' : cout<<"Namaste"<<endl;
        break;

        default : cout<<"Wrong selection"<<endl;

    }
}