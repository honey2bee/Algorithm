#include <bits/stdc++.h>
using namespace std;
int N, M, ar[105][105], visited[105][105];
const int dx[] = {0, -1, 0, 1};
const int dy[] = {-1, 0, 1, 0};
string s;

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        for (int j = 0; j < M; j++)
            ar[i][j] = s[j] - '0';
    }

    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0][0] = 1;

    while (q.size())
    {
        int x, y;
        tie(x, y) = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= N || ny >= M || nx < 0 || ny < 0)
                continue;
            if (visited[nx][ny] == 0 && ar[nx][ny])
            {
                visited[nx][ny] = visited[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    cout << visited[N - 1][M - 1];
}