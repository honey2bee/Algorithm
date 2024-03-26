#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, after = 0, flag;
    string s, name;

    cin >> N >> s;
    for (int i = 0; i < N; i++)
    {
        cin >> name;
        after = 0;
        flag = 1;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == '*' || after)
                after++;
            if ((!after && s[j] != name[j]) || (after > 1 && s[s.size() - after + 1] != name[name.size() - after + 1]))
                flag = 0;
        }
        if (s.size() - 1 > name.size())
            flag = 0;
        if (flag)
            cout << "DA\n";
        else
            cout << "NE\n";
    }
}