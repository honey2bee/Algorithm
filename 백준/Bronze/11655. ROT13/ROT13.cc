#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
        {
            int upper = isupper(s[i]);
            s[i] -= 13;
            if ((upper && s[i] < 'A') || (!upper && s[i] < 'a'))
                s[i] += 26;
        }
        cout << s[i];
    }
}
