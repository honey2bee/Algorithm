#include <bits/stdc++.h>
using namespace std;

int k, num[15];
vector<int> lotto;

int main()
{
    while (1)
    {
        cin >> k;
        if (k == 0)
            break;
        lotto.clear();
        for (int i = 0; i < k; i++)
        {
            if (i < k - 6)
                lotto.push_back(1);
            else
                lotto.push_back(0);
        }
        sort(lotto.begin(), lotto.end());

        for (int i = 0; i < k; i++)
            cin >> num[i];
        do
        {
            for (int j = 0; j < k; j++)
                if (lotto[j] == 0)
                    cout << num[j] << " ";
            cout << "\n";

        } while (next_permutation(lotto.begin(), lotto.end()));
        cout << "\n";
    }
}
