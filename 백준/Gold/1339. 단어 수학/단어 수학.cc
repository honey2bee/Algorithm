#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

int main()
{
    int N, num = 9, ans = 0;
    vector<pair<int, int>> v;
    int alpha[26] = {0};
    string str;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> str;
        for (int j = 0; j < str.length(); j++)
        {
            alpha[str[j] - 'A'] += pow(10, str.length() - j - 1);
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] > 0)
            v.push_back({i, alpha[i]});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto i : v)
        ans += i.second * num--;

    cout << ans;
}