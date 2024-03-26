#include <bits/stdc++.h>
using namespace std;

int main()
{
    int time[4] = {0}, truck[101] = {0};
    int start, end, total = 0;

    cin >> time[1] >> time[2] >> time[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> start >> end;
        for (int j = start; j < end; j++)
            truck[j]++;
    }
    for (int i = 0; i < 100; i++)
        total += truck[i] * time[truck[i]];
    cout << total;
}
