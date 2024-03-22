#include <bits/stdc++.h>
using namespace std;

int priority[11], N;
int big_ans[10], small_ans[10];
int answer = 9, answer2 = 1;

void big(int n)
{
    if (priority[n] < priority[n + 1] && n < N)
        big(n + 1);
    big_ans[n] = answer--;
}

void small(int n)
{
    if (priority[n] > priority[n + 1] && n < N)
        small(n + 1);
    small_ans[n] = answer2++;
}

int main()
{
    char c;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> c;
        if (c == '<')
            priority[i + 1] = priority[i] + 1;
        else
            priority[i + 1] = priority[i] - 1;
    }
    for (int i = 0; i < N + 1; i++)
    {
        if (!big_ans[i])
            big(i);
        if (!small_ans[i])
            small(i);
    }
    for (int i = 0; i < N + 1; i++)
        cout << big_ans[i];
    cout << "\n";
    for (int i = 0; i < N + 1; i++)
        cout << small_ans[i] - 1;
}
