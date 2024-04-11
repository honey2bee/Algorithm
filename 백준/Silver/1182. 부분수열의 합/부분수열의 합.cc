#include <bits/stdc++.h>
using namespace std;
int ar[25], n, s, cnt;
vector<int> v;

int main()
{
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        v.push_back(0);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        v[i] = 1;
        do
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
                if (v[j])
                    sum += ar[j];
            if (sum == s)
                cnt++;
        } while (next_permutation(v.begin(), v.end()));
    }
    cout << cnt;
}