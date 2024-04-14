#include <bits/stdc++.h>
using namespace std;
int N, M, ar[55][55];
int T, K, a, b;
const int dx[] = {0, -1, 0, 1};
const int dy[] = {-1, 0, 1, 0};

void DFS(int x, int y)
{
    ar[x][y] = 0;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= N || ny >= M || nx < 0 || ny < 0)
            continue;
        if (ar[nx][ny])
            DFS(nx, ny);
    }
}

int main()
{
    cin >> T;
    for (int k = 0; k < T; k++)
    {
        cin >> N >> M >> K;
        int n = 0;
        for (int i = 0; i < K; i++)
        {
            cin >> a >> b;
            ar[a][b] = 1;
        }
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++)
            {
                if (ar[i][j])
                {
                    DFS(i, j);
                    n++;
                }
            }
        cout << n << "\n";
    }
}