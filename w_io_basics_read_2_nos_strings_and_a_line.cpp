#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string s1;
    cin.ignore();
    getline(cin, s1);
    string s2 = "";
    getline(cin, s2);
    cout << a << " " << b << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    return 0;
}