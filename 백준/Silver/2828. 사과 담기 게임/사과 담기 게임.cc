#include <bits/stdc++.h>
using namespace std;
int N, box, n, apple, sum = 0;

int main()
{
    int offset = 1;
    cin >> N >> box >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> apple;
        if (offset <= apple && apple < offset + box)
            continue;
        if (offset > apple)
        {
            sum += offset - apple;
            offset = apple;
        }

        else
        {
            sum += apple - (offset + box) + 1;
            offset = apple - box + 1;
        }
    }
    cout << sum;
}