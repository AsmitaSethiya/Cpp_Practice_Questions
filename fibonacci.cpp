#include<iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, c, n;

    cout<<"Enter value of n: ";
    cin>>n;

    cout<<a<<"\t"<<b<<"\t";

    for(int i = 1; i <= n - 2; i++)
    {
        c = a + b;
        cout<<c<<"\t";

        a = b;
        b = c;
    }

    return 0;
}
