#include <bits/stdc++.h>
#include <iostream>


using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'steadyGene' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING gene as parameter.
 */

int steadyGene(string gene)
{
    if(gene.length() == 0)
        return 0;
    int n = gene.length();
    if(n % 4 != 0)
        return -1;
    int count[4] = {0};
    for(int i = 0; i < n; i++)
    {
        if(gene[i] == 'A')
            count[0]++;
        else if(gene[i] == 'C')
            count[1]++;
        else if(gene[i] == 'G')
            count[2]++;
        else if(gene[i] == 'T')
            count[3]++;
    }
    int ans = n;
    if(count[0] == n && count[1] == n && count[2] == n && count[3] == n)
        return 0;
    int i = 0, j = 0;
    while (i < n && j < n) 
    {
        if (count[0] > n/4 || count[1] > n/4 || count[2] > n/4 || count[3] > n/4) 
        {
            if(gene[j] == 'A')
                count[0]--;
            else if(gene[j] == 'C')
                count[1]--;
            else if(gene[j] == 'G')
                count[2]--;
            else
                count[3]--;
            j++;
        } else {
            ans = min(ans, j-i);
            if(gene[i] == 'A')
                count[0]++;
            else if(gene[i] == 'C')
                count[1]++;
            else if(gene[i] == 'G')
                count[2]++;
            else
                count[3]++;
            i++;
        }
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    // int n = stoi(ltrim(rtrim(n_temp)));

    string gene;
    getline(cin, gene);

    int result = steadyGene(gene);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
