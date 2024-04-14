#include <bits/stdc++.h>
using namespace std;
int N, ar[66][66];
string s;
void go(int x, int y, int N, int n)
{
    if (N == 0)
        return;
    if (n == 1)
        cout << "(";
    int flag = 1;
    int tmp = ar[x][y];
    for (int i = x; i < x + N; i++)
    {
        for (int j = y; j < y + N; j++)
        {
            if (ar[i][j] == tmp)
                continue;
            flag = 0;
        }
    }
    if (flag)
        cout << ar[x][y];
    else
    {
        go(x, y, N / 2, 1);
        go(x, y + N / 2, N / 2, 2);
        go(x + N / 2, y, N / 2, 3);
        go(x + N / 2, y + N / 2, N / 2, 4);
    }
    if (n == 4)
        cout << ")";
}

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        for (int j = 0; j < N; j++)
            ar[i][j] = s[j] - '0';
    }
    go(0, 0, N, 0);
}