#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int year;
    cin >> year;
    if (year % 4 == 0) {
        if (year % 100 == 0 && year % 400 != 0) {
            cout << "Not leap year";
        } else {
            cout << "Leap year";
        }
    } else {
        cout << "Not leap year";
    }
    return 0;
}
