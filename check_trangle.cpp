#include<iostream>
using namespace std;

int main()
{
    int sidea, sideb, sidec;

    cout<<"Enter side a: ";
    cin>>sidea;

    cout<<"Enter side b: ";
    cin>>sideb;

    cout<<"Enter side c: ";
    cin>>sidec;

    if(sidea == sideb && sideb == sidec)
    {
        cout<<"This is an equilateral triangle. \n";
    }
    else if(sidea == sideb || sidea == sidec || sideb == sidec)
    {
        cout<<"This is an isosceles traingle. \n";
    }
    else
    {
        cout<<"This is a scalence traingle. \n";
    }

    return 0;
}
