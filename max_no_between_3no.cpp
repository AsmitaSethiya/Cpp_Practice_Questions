#include<iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout<<"Enter number 1: ";
    cin>>num1;

    cout<<"Enter number 2: ";
    cin>>num2;

    cout<<"Enter number 3: ";
    cin>>num3;

    if(num1 > num2 && num1 > num3)
    {
        cout<<"Max number is: "<<num1;
    }
    else if(num2 > num1 && num2 > num3)
    {
        cout<<"Max number is: "<<num2;
    }
    else
    {
        cout<<"Max number is: "<<num3;
    }

    return 0;
}
