#include <bits/stdc++.h>
using namespace std;
bool visited[10][10];
const int dx[] = {0, -1, 0, 1};
const int dy[] = {-1, 0, 1, 0};
int ar[10][10], tmp[10][10], wall[10], N, M;
vector<int> v;

void DFS(int x, int y)
{
    visited[x][y] = 1;
    ar[x][y] = 2;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= N || ny >= M || nx < 0 || ny < 0)
            continue;
        if (visited[nx][ny] == 0 && ar[nx][ny] == 0)
            DFS(nx, ny);
    }
}

int main()
{
    int max = 0;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            cin >> ar[i][j];
            tmp[i][j] = ar[i][j];
            v.push_back(0);
        }

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);

    do
    {
        int flag = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] && ar[i / M][i % M] == 0)
            {
                wall[flag] = i / M;
                wall[flag + 1] = i % M;
                flag += 2;
            }
        }

        if (flag == 6)
        {
            for (int i = 0; i < 6; i += 2)
            {
                ar[wall[i]][wall[i + 1]] = 1;
            }
            int n = 0;

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < M; j++)
                {
                    if (visited[i][j] == 0 && ar[i][j] == 2)
                        DFS(i, j);
                }
            }

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < M; j++)
                {
                    if (ar[i][j] == 0)
                        n++;
                    ar[i][j] = tmp[i][j];
                    visited[i][j] = 0;
                }
            }

            if (max < n)
                max = n;
        }
    } while (next_permutation(v.begin(), v.end()));
    cout << max;
}