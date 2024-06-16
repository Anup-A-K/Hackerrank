#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int a, b;
    cin >> a >> b;
    for(int i = 1;i<=b;i++)
    {
        int temp = a*i;
        cout << a << " * " << i << " = " << temp << endl;
    }
    return 0;
}
