#include<iostream>
using namespace std;

int main()
{
    int num, r;

    cout<<"Enter a number: ";
    cin>>num;

    while(num != 0)
    {
        r = num % 10;
        cout<<r;
        num = num / 10;
    }

    return 0;
}
