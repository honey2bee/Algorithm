#include <bits/stdc++.h>
using namespace std;

int main()
{
    int alpha[27] = {0};
    string s;
    cin >> s;
    for (auto i : s)
    {
        alpha[i - 'a']++;
    }
    for (int i = 0; i < 26; i++)
        cout << alpha[i] << " ";
}
