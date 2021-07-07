#include<iostream>
using namespace std;

void swap(int num1, int num2)
{
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout<<"After swapping the numbers are: ";

    cout<<num1<<"\t"<<num2;


}

int main()
{
    int num1, num2;

    cout<<"Enter value of num1: ";
    cin>>num1;

    cout<<"Enter value of num2: ";
    cin>>num2;

    swap(num1, num2);

    return 0;
}
