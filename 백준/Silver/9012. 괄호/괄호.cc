#include <bits/stdc++.h>
using namespace std;
int N;
string s;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        stack<char> st;
        int flag = 1;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == ')')
            {
                if (st.size() > 0)
                    st.pop();
                else
                    flag = 0;
            }
            else
                st.push(s[j]);
        }
        if (st.size() == 0 && flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}