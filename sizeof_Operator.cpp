#include<iostream>
using namespace std;

int main()
{
    int a; // declaration
    a = 10; // initialization

    cout <<"size of int is: " << sizeof(a)<<endl;
    
    float b;
    cout<<"Size of float is: " <<sizeof(b)<<endl;

    char ch;
    cout << "Size of char is: " << sizeof(ch)<<endl;

    bool p;
    cout<<"Size of boolean is: "<< sizeof(p)<<endl;

    long l;
    cout<<"size of long is: "<< sizeof(l)<<endl;

    short s;
    cout << "size of short is: "<<sizeof(s)<<endl;

    double o;
    cout << "size of o is: "<< sizeof(o)<<endl;

    return 0;
}
