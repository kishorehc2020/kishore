#include<iostream>
using namespace std;

class tracer{
    int id;
public:
    tracer(int i):id(i){cout<<"tracer "<<id<<" constructed"<<endl;}
    ~tracer(){cout<<"tracer "<<id<<" destructed"<<endl;}
};
int main(){
    cout<<"Enter block\n";
    {tracer a(1),b(2);cout<<"...working...\n";}
     cout <<"left block\n";
     return 0;
}