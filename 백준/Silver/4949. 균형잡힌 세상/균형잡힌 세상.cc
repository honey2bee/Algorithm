#include <bits/stdc++.h>
using namespace std;
string s;

int main()
{
    while (getline(cin, s, '.'))
    {
        if (s == "")
            break;
        stack<char> stk;
        int flag = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ')')
            {
                if (stk.size() == 0)
                    flag = 0;
                else if (stk.top() == '(')
                    stk.pop();
                else
                    flag = 0;
            }
            else if (s[i] == ']')
            {
                if (stk.size() == 0)
                    flag = 0;
                else if (stk.top() == '[')
                    stk.pop();
                else
                    flag = 0;
            }
            else if (s[i] == '(' || s[i] == '[')
                stk.push(s[i]);
        }
        if (stk.size() == 0 && flag)
            cout << "yes\n";
        else
            cout << "no\n";
        string bufferflush = ".";
        getline(cin, bufferflush);
    }
}