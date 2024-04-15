#include <bits/stdc++.h>
using namespace std;
int M, flag;
string s;
vector<string> v;

bool cmp(const string &a, const string &b)
{
    if (a.size() == b.size())
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] != b[i])
                return a[i] < b[i];
        }
    return a.size() < b.size();
}

int main()
{
    cin >> M;

    for (int i = 0; i < M; i++)
    {
        cin >> s;
        int flag = 0;
        string a = "";
        for (int j = 0; j < s.size(); j++)
        {
            if ('0' <= s[j] && s[j] <= '9')
            {
                a += s[j];
                flag = 1;
            }
            else if (flag)
            {

                v.push_back(a);
                a = "";
                flag = 0;
            }
        }
        if (flag)
            v.push_back(a);
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i][0] == '0')
        {
            flag = 0;
            int j;
            for (j = 1; j < v[i].size(); j++)
            {
                if (v[i][j] != '0')
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
                v[i].erase(0, j);

            else
                v[i] = '0';
        }
    }

    sort(v.begin(), v.end(), cmp);

    for (auto i : v)
        cout << i << "\n";
}