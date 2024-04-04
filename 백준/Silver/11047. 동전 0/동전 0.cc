#include <bits/stdc++.h>
using namespace std;

int N, K, n;
int money[15];

int main()
{
    cin >> N >> K;
    for (int i = 0; i < N; i++)
        cin >> money[i];

    for (int i = N - 1; i > 0; i--)
    {
        if (money[i] <= K)
        {
            n += K / money[i];
            K %= money[i];
        }
    }
    cout << n + K;
}