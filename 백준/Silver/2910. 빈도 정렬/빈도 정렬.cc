#include <bits/stdc++.h>
using namespace std;
map<string, int> num;
map<string, int> order;
int N;
string s;

bool cmp(const pair<string, int> &a, const pair<string, int> &b)
{
    if (a.second == b.second)
        return order[a.first] < order[b.first];
    return a.second > b.second;
}

int main()
{
    cin >> N >> s;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        num[s]++;
        if (order[s] > 0)
            continue;
        order[s] = i + 1;
    }
    vector<pair<string, int>> v(num.begin(), num.end());
    sort(v.begin(), v.end(), cmp);

    for (auto i : v)
    {
        for (int j = 0; j < i.second; j++)
        {
            cout << i.first << " ";
        }
    }
}