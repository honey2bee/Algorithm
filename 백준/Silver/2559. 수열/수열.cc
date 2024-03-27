#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K, num[100001] = {0}, max = -999999;
    cin >> N >> K;
    num[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        cin >> num[i];
        num[i] += num[i - 1];
    }

    for (int i = K; i <= N; i++)
    {
        if (max < num[i] - num[i - K])
            max = num[i] - num[i - K];
    }
    cout << max;
}
