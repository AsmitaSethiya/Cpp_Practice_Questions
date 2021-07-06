#include<iostream>
using namespace std;

void fib(int num)
{
    int a = 0, b = 1,c ;

    cout<<a<<"\t"<<b<<"\t";

    for(int i = 1; i <= num - 2; i++)
    {
        c = a + b;
        cout<<c<<"\t";

        a = b;
        b = c;
    }
}


int main()
{
    int n;

    cout<<"Enter number: ";
    cin>>n;

    fib(n);

    return 0;
}
