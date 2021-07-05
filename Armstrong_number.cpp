#include<iostream>
using namespace std;

int main()
{
    int num, temp, r, rev = 0;

    cout<<"Enter a number: ";
    cin>>num;

    temp = num;

    while(num != 0)
    {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    }

    if(temp == rev)
    {
        cout<<"Armstrong number.";
    }
    else
    {
        cout<<"Not a armstrong number.";
    }

    return 0;

}
