#include<iostream>
using namespace std;

int min(int num1, int num2, int num3)
{
    if(num1 < num2 && num1 < num3)
    {
        return num1;
    }
    else if(num2 < num3 && num2 < num1)
    {
        return num2;
    }
    else
    {
      return num3;
    }
}

int max(int num1,int num2,int num3)
{
    if(num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if(num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

int main()
{
    int num1, num2, num3;

    cout<<"Enter num1: ";
    cin>>num1;

    cout<<"Enter num2: ";
    cin>>num2;

    cout<<"Enter num3: ";
    cin>>num3;

    cout<<"Minimum element is: "<<min(num1, num2, num3)<<endl;

    cout<<"Minimum element is: "<<max(num1, num2, num3)<<endl;

    return 0;
}
