#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    
    v.push_back(2);                             //Adding elements at end side
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(6);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(8);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(7);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.resize(10);                                //Resize function dynamically changes the size
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.pop_back();                                //Deletes one element from end
    v.pop_back();
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.insert(v.begin()+2, 5);                   //Inserts element at any position we want... position should be wrt to v.begin() or v.end()... i.e. 0th inedx or size-1 index
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;



}