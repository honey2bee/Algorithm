#include <bits/stdc++.h>
using namespace std;

vector<int> v_op;

int main()
{
    int op, N, ar[12], min = 1000000000, max = -1000000000;

    cin >> N;

    v_op.resize(N - 1);

    for (int i = 0; i < N; i++)
        cin >> ar[i];
    int first = 0;
    for (int i = 1; i <= 4; i++)
    {
        cin >> op;

        if (op)
        {
            fill(v_op.begin() + first, v_op.begin() + first + op, i);
            first += op;
        }
    }

    do
    {
        int sum = ar[0];
        for (int i = 1; i < N; i++)
        {
            if (v_op[i - 1] == 1)
                sum += ar[i];
            else if (v_op[i - 1] == 2)
                sum -= ar[i];
            else if (v_op[i - 1] == 3)
                sum *= ar[i];
            else
                sum /= ar[i];
        }
        if (min > sum)
            min = sum;
        if (max < sum)
            max = sum;
    } while (next_permutation(v_op.begin(), v_op.end()));

    cout << max << "\n"
         << min;
}