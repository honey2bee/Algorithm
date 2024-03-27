#include <bits/stdc++.h>
using namespace std;

int N, M;
map<string, int> clo;
string s, c;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        clo.clear();
        cin >> M;
        for (int j = 0; j < M; j++)
        {
            cin >> s >> c;
            clo[c]++;
        }
        int num = 1;
        for (auto j : clo)
            num *= j.second + 1;
        cout << num - 1 << "\n";
    }
}