#include<iostream>
using namespace std;

int main()
{
    int num, sum = 0;

    cout<<"Enter value of num: ";
    cin>>num;

    for(int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    cout<<"sum of natural numbers till " << num << " is: " << sum;

    return 0;
}
