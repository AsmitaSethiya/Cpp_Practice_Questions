#include<iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    for(int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    return  fact;
}

int main()
{
    int num, fact;

    cout<<"Enter number: ";
    cin>>num;


    fact = factorial(num);

    cout<<fact;
    return 0;


}  