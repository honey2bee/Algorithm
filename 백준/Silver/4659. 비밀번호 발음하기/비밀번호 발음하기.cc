#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    while (cin >> s && s != "end")
    {
        int mo[20] = {0}, ja[20] = {0}, n = 0, m = 0, flag = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                mo[n] = i + 1;
                if (n > 1 && mo[n] == mo[n - 1] + 1 && mo[n - 1] == mo[n - 2] + 1)
                    flag = 1;
                n += 1;
            }
            else
            {
                ja[m] = i;
                if (m > 1 && ja[m] == ja[m - 1] + 1 && ja[m - 1] == ja[m - 2] + 1)
                    flag = 1;
                m += 1;
            }
            if (i > 0 && s[i - 1] == s[i] && (s[i] != 'e' && s[i] != 'o'))

                flag = 1;
        }
        if (flag || !mo[0])
            cout << "<" << s << ">"
                 << " is not acceptable.\n";
        else
            cout << "<" << s << ">"
                 << " is acceptable.\n";
    }
}