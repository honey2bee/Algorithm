#include <bits/stdc++.h>
using namespace std;
int N, team, before, after, win, tt[2];
string tim;

int main()
{
    cin >> N;

    for (int i = 0; i <= N; i++)
    {
        if (i < N)
            cin >> team >> tim;
        else
            tim = "48:00";
        before = after;
        after = ((tim[0] - '0') * 10 + (tim[1] - '0')) * 60 + (tim[3] - '0') * 10 + (tim[4] - '0');
        if (win > 0)
            tt[0] += after - before;

        else if (win < 0)
            tt[1] += after - before;

        if (team == 1)
            win++;
        else
            win--;
    }
    for (int i = 0; i < 2; i++)
    {
        string min = "", sec = "";
        min = to_string(tt[i] / 60);
        sec = to_string(tt[i] % 60);
        if (tt[i] / 60 < 10)
            min = "0" + min;
        if (tt[i] % 60 < 10)
            sec = "0" + sec;
        cout << min << ":" << sec << "\n";
    }
}