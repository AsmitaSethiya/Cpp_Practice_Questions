#include<iostream>
using namespace std;

void checkNum(int num)
{
    if(num % 2 == 0)
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }
}

int main()
{
    int num;

    cout<<"Enter a number: ";
    cin>>num;

   checkNum(num);

    return 0;
}
