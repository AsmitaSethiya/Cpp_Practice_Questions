#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter a number to check: ";
    cin>>n;

    bool flag = true;

    for(int i = 2; i < n; i++)
    {
        if(n % 2 == 0)
        {
            flag = false;
            break;
        }
    }

    if(flag == true)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Non- Prime";
    }

    return 0;
}
