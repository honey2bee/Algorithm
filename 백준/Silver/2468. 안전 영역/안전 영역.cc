#include <bits/stdc++.h>
using namespace std;
int N, ar[103][103], cnt;
int visited[103][103];

void DFS(int i, int j, int h)
{
    if (visited[i][j] == 1)
        return;
    visited[i][j] = 1;
    if (ar[i][j + 1] > h)
        DFS(i, j + 1, h);
    if (ar[i + 1][j] > h)
        DFS(i + 1, j, h);
    if (ar[i - 1][j] > h)
        DFS(i - 1, j, h);
    if (ar[i][j - 1] > h)
        DFS(i, j - 1, h);
}

int main()
{
    int height = 0;
    cin >> N;
    for (int i = 0; i <= N + 1; i++)
    {
        for (int j = 0; j <= N + 1; j++)
        {

            if (i == 0 || j == 0 || i == N + 1 || j == N + 1)
                visited[i][j] = 1;
            else
                cin >> ar[i][j];
            if (height < ar[i][j])
                height = ar[i][j];
        }
    }
    int max = 0;
    for (int k = 0; k <= height; k++)
    {
        cnt = 0;
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                if (ar[i][j] > k && visited[i][j] == 0)
                {
                    cnt++;
                    DFS(i, j, k);
                }
            }
        }
        if (max < cnt)
            max = cnt;
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
                visited[i][j] = 0;
        }
    }
    cout << max;
}