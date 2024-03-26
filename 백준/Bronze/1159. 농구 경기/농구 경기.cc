#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, alpha[26] = {0}, flag = 1;
    string s;
    vector<char> v;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        alpha[s[0] - 'a']++;
        if (alpha[s[0] - 'a'] == 5)
        {
            v.push_back(s[0]);
            flag = 0;
        }
    }
    if (flag)
        cout << "PREDAJA";
    else
    {
        sort(v.begin(), v.end());
        for (auto i : v)
            cout << i;
    }
}
