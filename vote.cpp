#include<iostream>
using namespace std;

bool isEligible(int age)
{
    if(age >= 18)
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
    int age;

    cout<<"Enter person's age: ";
    cin>>age;

    if(isEligible(age))
    {
        cout<<"Perrson is eligible for vote";
    }
    else
    {
        cout<<"Person is not eligible for vote";
    }

    return 0;
}
