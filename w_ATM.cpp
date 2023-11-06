#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() 
{
    int withdraw;
    float balance;
    cin >> withdraw >> balance;
    if(withdraw % 5 != 0)
    {
        cout << fixed << setprecision(2) << balance;
    }
    else if(withdraw > balance)
    {
        cout << fixed << setprecision(2) << balance;
    }
    else if(withdraw <= balance)
    {
        if(withdraw + 0.5 <= balance)
        {
            balance -= (withdraw + 0.5);
            printf("%.2f", balance);
        }
        else
        {
            cout << fixed << setprecision(2) << balance;
        }
    }
    return 0;
}
