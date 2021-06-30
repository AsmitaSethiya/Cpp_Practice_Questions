#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number to check it is even or odd: ";
    cin>>num;

    if(num % 2 == 0)
    {
        cout<<num<<" is a Even number\n";
    }
    else
    {
        cout<<num<<" is a odd number\n";
    }

    return 0;
}
