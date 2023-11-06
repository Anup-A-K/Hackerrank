#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n, count=0;
        cin >> n;
        int temp = n;
        while(temp > 0)
        {
            int digit = temp % 10;
            if(digit != 0 && n % digit == 0)
                count++;
            temp /= 10;
        }
        cout << count << endl;
    }
}