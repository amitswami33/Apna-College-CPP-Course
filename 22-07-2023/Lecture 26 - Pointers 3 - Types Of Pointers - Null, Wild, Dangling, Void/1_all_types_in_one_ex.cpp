//1.Wild 2.Null 3.Dangling 4.Void
#include<iostream>
using namespace std;
int main()
{   
    //1.Wild Pointers:
    cout<<"1.Wild Pointers"<<endl;
    int *ptr1 ; //Not initialized i.e. un-defined value pointer
    cout<<ptr1<<endl; //Points to any random address from memory..i.e. output address is unknown address from memory
    cout<<*ptr1<<endl; //Gives any random value from that random address
    //To avoid this, we can use Null poointers

    //2.Null Pointers
    cout<<endl<<"2.NULL POINTERS :- "<<endl;
    int *ptr2 =NULL;
    int *ptr3 =0;
    int *ptr4 = '\0';
    cout<<ptr2<<" "<<ptr3<<" "<<ptr4<<endl;
    //cout<<*ptr2<<" "<<*ptr3<<" "<<*ptr4<<endl;
    //Null pointer cant derefence the address.. it will give error.. so it is its drawback

    //3.Dangling Pointer (Dutarfa) //non existed variable cha address jar ptr ne store kela tr tyala dangling pointer mhntet.
    cout<<endl<<"3.Dangling Pointers"<<endl;
    int *ptr5=NULL;
    cout<<ptr5<<endl;
    {
        int x=10; //x will get vanished from memory outside this box
        ptr5=&x; // now, ptr5 addressing x, but outside this box, x is non exist and hence ptr5 will give random address 
    }
    cout<<ptr5<<endl; //It will throw address from random memory

    //4.Void pointer ... very useful.. special pointers that can store any datatype address ... further uses typecasting
    cout<<endl<<"4.Void Pointers"<<endl;
    float f =10.7;
    int z=20;
    void *ptr6=&f; //void ptr6 stores float type address in it.
   // cout<<*ptr6<<endl; ...//dereferencing gives error... not gives value of address of  float f (10.7)
    ptr6=&z;
    
    //cout<<*ptr6<<endl;...dereferencing gives error... not gives value of that address of int z (20).
    
    //int *integerPointer = ptr6; //gives error
    int *integerPointer = (int *)ptr6;
    cout<<*integerPointer<<endl; //20

}