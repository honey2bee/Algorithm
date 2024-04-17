#include <bits/stdc++.h>
using namespace std;
int t, n, cnt;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cnt = 0;
        int tmp = 5;
        while (n >= tmp)
        {
            cnt += n / tmp;
            tmp *= 5;
        }
        cout << cnt << "\n";
    }
}