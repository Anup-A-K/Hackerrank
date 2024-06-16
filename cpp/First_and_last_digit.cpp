#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0 ; i<n; i++)
    {
        string s;
        cin >> s;
        int a = s[0] - '0';
        int b = s[s.length()-1] - '0';
        cout << a+b << endl;
    }
}