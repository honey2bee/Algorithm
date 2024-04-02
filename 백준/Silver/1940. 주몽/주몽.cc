#include <bits/stdc++.h>
using namespace std;

int N, M, n;
int ar[15005];

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        cin >> ar[i];
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (ar[i] + ar[j] == M)
                n++;
        }
    }
    cout << n << "\n";
}