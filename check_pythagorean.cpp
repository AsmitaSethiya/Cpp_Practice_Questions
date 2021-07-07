#include<iostream>
using namespace std;

bool check(int x, int y, int z)
{
    int a = max(x, (max(y,z)));

    int b,c;

    if(a == x)
    {
        b = y;
        c = z;
    }
    else if(b == x)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if(a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int x, y, z;

    cout<<"Enter value of x, y and z: ";
    cin>>x>>y>>z;

    if(check(x,y,z))
    {
        cout<<"Pythagorean triplet";
    }
    else
    {
        cout<<"Not a pythagorean triplet";
    }

    return 0;
}