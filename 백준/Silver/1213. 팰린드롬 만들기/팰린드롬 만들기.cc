#include <bits/stdc++.h>
using namespace std;

string s, ret;
int a[27], flag;
char mid;

int main()
{
    cin >> s;
    for (auto i : s)
        a[i - 'A']++;
    for (int i = 25; i >= 0; i--)
    {
        if (flag == 2)
            break;
        if (a[i] & 1)
        {
            flag++;
            a[i]--;
            mid = i + 'A';
        }
        for (int j = 0; j < a[i]; j += 2)
        {
            ret = char(i + 'A') + ret;
            ret += i + 'A';
        }
    }

    if (flag == 2)
        cout << "I'm Sorry Hansoo";
    else
    {
        if (mid)
            ret.insert(ret.begin() + ret.size() / 2, mid);
        for (auto i : ret)
            cout << i;
    }
}