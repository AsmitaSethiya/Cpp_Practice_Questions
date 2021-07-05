#include<iostream>
using namespace std;

int main()
{
    int num, temp, r, sum = 0;

    cout<<"Enter a number: ";
    cin>>num;

    temp = num;

    while(num != 0)
    {
        r = num % 10;
        sum += (r * r * r);
        num = num / 10;
    }

    if(sum == temp)
    {
        cout<<"Armstrong number.";
    }
    else
    {
        cout<<"Not a armstrong number.";
    }

    return 0;

}
