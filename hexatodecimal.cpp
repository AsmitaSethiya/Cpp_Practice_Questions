#include<iostream>
#include<string.h>
using namespace std;

int hexatoDecimal(string s)
{
    int ans = 0;
    int x = 1;

    int size = s.size();
    for(int i = size - 1; i >= 0; i--)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            ans = ans + x*(s[i] - '0');
        }
        else if(s[i] >= 'A' && s[i] <= 'F')
        {
            ans = ans + x *(s[i] - 'A' + 10);
        }

        x = x * 16;
    }

    return ans;
}

int main()
{
    string a;
    cin>>a;

    cout<<hexatoDecimal(a)<<endl;
}
