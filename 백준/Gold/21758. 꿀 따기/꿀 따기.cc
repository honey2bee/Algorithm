#include <bits/stdc++.h>
using namespace std;
int N, ar[100001], honey[5], a;

int main()
{
    int max = -99999;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        if (i != 0 && i != N - 1 && max < a)
            max = a;
        if (i == 0)
            ar[i] = a;
        else
            ar[i] += ar[i - 1] + a;
    }
    honey[1] = ar[N - 2] - ar[0] + max;

    max = -99999;
    for (int i = 1; i < N - 1; i++)
    {
        int tmp = ar[N - 1] - ar[i] * 2 + ar[i - 1];

        if (max < tmp)
            max = tmp;
    }
    honey[0] = max + ar[N - 1] - ar[0];

    max = -99999;

    for (int i = 1; i < N - 1; i++)
    {
        int tmp = ar[i - 1] * 2 - ar[i];
        if (max < tmp)
            max = tmp;
    }
    honey[2] = ar[N - 2] + max;

    max = -99999;
    for (int i = 0; i < 3; i++)

        if (max < honey[i])
            max = honey[i];
    cout << max;
}
