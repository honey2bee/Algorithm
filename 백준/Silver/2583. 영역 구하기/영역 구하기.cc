#include <bits/stdc++.h>
using namespace std;
int N, M, K, n;
int ar[103][103];
const int dx[] = {0, -1, 0, 1};
const int dy[] = {-1, 0, 1, 0};
vector<int> v;

void DFS(int x, int y)
{
    n++;
    ar[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= N || ny >= M || nx < 0 || ny < 0)
            continue;
        if (!ar[nx][ny])
            DFS(nx, ny);
    }
}

int main()
{
    int a, b, c, d;
    cin >> M >> N >> K;
    while (K--)
    {
        cin >> a >> b >> c >> d;
        for (int i = a; i < c; i++)
            for (int j = b; j < d; j++)
                ar[i][j] = 1;
    }
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            if (!ar[i][j])
            {
                DFS(i, j);
                v.push_back(n);
                n = 0;
            }
        }
    sort(v.begin(), v.end());
    cout << v.size() << "\n";
    for (auto i : v)
        cout << i << " ";
}