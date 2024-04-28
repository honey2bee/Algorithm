#include <bits/stdc++.h>
using namespace std;
int N, cnt, i;

int main()
{
    cin >> N;
    for (i = 666; cnt != N; i++)
    {
        string s = to_string(i);
        if (s.find("666") != string::npos)
        {
            cnt++;
        }
    }
    cout << i - 1;
}