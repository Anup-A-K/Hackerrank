#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z')
    {
        cout << "lowercase" << endl;
    }
    else if (c >= 'A' && c <= 'Z')
    {
        cout << "uppercase" << endl;
    }
    else if(c >= '0' && c <= '9')
    {
        cout << "digit" << endl;
    }
    else
    {
        cout << (int)c << endl;
    }
}