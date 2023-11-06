#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int num;
    cin >> num;
    int sum = 0;
    while(num > 0)
    {
        int temp = num % 10;
        sum += temp;
        num /= 10;
    }
    cout << sum;
    return 0;
}
