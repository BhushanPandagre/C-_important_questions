#include<iostream>
using namespace std;
#include<vector>
#include<array>
int main()
{
    array<int,4> a1{10,20,30,40};
    array<int,4> a2{100,200,300,400};
    a1.swap(a2);
    cout<<"data of a1\n";
    for(auto p1:a1)
    {
        cout<<p1<<"\n";
    }
    cout<<"data of a2\n";
    for(auto p2:a2)
    {
        cout<<p2<<"\n";
    }

    return 0;
}