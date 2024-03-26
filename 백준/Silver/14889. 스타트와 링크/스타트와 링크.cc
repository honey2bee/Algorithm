#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, S[21][21] = {0}, num[21] = {0};
    vector<int> ind;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        if (i < N / 2)
            ind.push_back(0);
        else
            ind.push_back(1);
        for (int j = 0; j < N; j++)
            cin >> S[i][j];
    }

    int min = 999999999;
    do
    {
        int start = 0, link = N / 2, tmp;

        for (int i = 0; i < N; i++)
        {
            if (ind[i])
                num[start++] = i;
            else
                num[link++] = i;
        }
        start = 0;
        link = 0;
        for (int i = 0; i < N / 2; i++)
            for (int j = i + 1; j < N / 2; j++)
                start += S[num[i]][num[j]] + S[num[j]][num[i]];

        for (int i = N / 2; i < N; i++)
            for (int j = i + 1; j < N; j++)
                link += S[num[i]][num[j]] + S[num[j]][num[i]];
        tmp = start - link;
        if (tmp < 0)
            tmp = -tmp;
        if (min > tmp)
            min = tmp;

    } while (next_permutation(ind.begin(), ind.end()));

    cout << min;
}
