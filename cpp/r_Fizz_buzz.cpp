#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        for(int j=1;j<=n;j++)
        {
            if(j%3==0 && j%5==0)
                cout << "fizzbuzz";
            else if(j%3==0)
                cout << "fizz";
            else if(j%5==0)
                cout << "buzz";
            else
                cout << j;
        }
        cout << endl;
    }
    return 0;
}
