#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin >> s;

    int flag = 1, s_len = s.size();
    for (int i = 0; i < s_len / 2; i++)
    {
        if (s[i] != s[s_len - i - 1])
        {
            flag = 0;
            break;
        }
    }
    cout << flag;
}
