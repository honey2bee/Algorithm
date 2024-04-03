#include <bits/stdc++.h>
using namespace std;

int N, n, cnt, k;
string s;
vector<char> v;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        if (s.size() & 1)
            continue;
        for (auto j : s)
            v.push_back(j);
        for (int j = 0; j < v.size() - 1; j++)
        {
            if (v[j] == v[j + 1])
            {
                for (k = 0; j - k >= 0 && j + k + 1 < v.size(); k++)
                {
                    if (v[j - k] != v[j + k + 1])
                        break;
                    n = k;
                }
                // cout << j << ":" << n << "\n";
                v.erase(v.begin() + j - n, v.begin() + j + n + 2);
                j = -1;
            }
            if (!(v.size()))
            {
                cnt++;
                break;
            }
        }

        v.clear();
    }
    cout << cnt;
}