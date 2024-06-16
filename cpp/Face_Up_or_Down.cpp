#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n, x;
        cin >> n >> x;
        if(n>=2 && x<=n)
        {
            if(x==n)
            {
                cout << 0 << endl;
            }
            else if(x < n-x)
            {
                cout << x << endl;
            }
            else
            {
                cout << n-x << endl;
            }
        }
    }
}