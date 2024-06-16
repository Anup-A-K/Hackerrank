// Given a valid (IPv4) IP address, return a defanged version of that IP address.

// A defanged IP address replaces every period "." with "[.]".

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int j = 0; j < a; j++) {
        string address;
        cin >> address;
        for (int i=0; i<address.size(); i++) {
            if (address[i] == '.') {
                address.replace(i, 1, "[.]");
                i += 2;
            }
        }
        cout << address << endl;
    }
    return 0;
}