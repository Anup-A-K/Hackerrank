#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        do {
            cout << s << " ";
        } while (next_permutation(s.begin(), s.end()));
        cout << endl;
    }
    return 0;
}
