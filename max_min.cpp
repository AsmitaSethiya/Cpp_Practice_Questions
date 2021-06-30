#include<iostream>
using namespace std;

int main()
{
    int num1, num2, max, min;

    cout<<"Enter number 1: ";
    cin>>num1;

    cout<<"Enter number 2: ";
    cin>>num2;

    if(num1 > num2)
    {
        max = num1;
        min = num2;
    }
    else
    {
        max = num2;
        min = num1;
    }

    cout<<"Maximum number is: "<<max<<endl;
    cout<<"Minimum number is: "<<min<<endl;

    return 0;
}
