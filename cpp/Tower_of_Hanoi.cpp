#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// there are only 3 towers a b and c
// Using a helper stick (peg), shift all rings from peg A to peg B using peg C.

// All rings are initally placed in ascending order, smallest being on top.

// No bigger ring can be placed over a smaller ring.
void hhanoi(int n, char a, char b, char c) {
    if (n == 1) {
        cout << a << " " << c << endl;
        return;
    }
    hhanoi(n-1, a, c, b);
    cout << a << " " << c << endl;
    hhanoi(n-1, b, a, c);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    char a = 'A', b = 'B', c = 'C';
    hhanoi(n,a,b,c);
    return 0;
}


