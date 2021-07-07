#include<iostream>
using namespace std;

bool isAlphabet(char ch)
{
    if(ch >= 'a' && ch <= 'z' || ch <= 'A' && ch >= 'Z')
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
    char ch;

    cout<<"Enter character: ";
    cin>>ch;

    if(isAlphabet(ch))
    {
        cout<<"Given character "<<ch<<" is a alphabet";
    }
    else
    {
        cout<<"Given character "<<ch<<" is not a alphabet";
    }

    return 0;
}
