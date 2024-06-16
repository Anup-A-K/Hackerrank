#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    vector<bool> alphabet(26, false);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            alphabet[s[i] - 'a'] = true;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            alphabet[s[i] - 'A'] = true;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (!alphabet[i]) {
            return "not pangram";
        }
    }
    return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
