#include <bits/stdc++.h>
using namespace std;

int N, M;
string ar[100005];
map<string, int> mp;
string s;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        cin >> ar[i];
        mp[ar[i]] = i;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> s;
        if (s[0] - '0' < 10)
            cout << ar[stoi(s)] << "\n";
        else
            cout << mp[s] << "\n";
    }
}