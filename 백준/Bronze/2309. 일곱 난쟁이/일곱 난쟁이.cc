#include <bits/stdc++.h>
using namespace std;

int main()
{
    int height[10] = {0};
    vector<int> combi = {0, 0, 1, 1, 1, 1, 1, 1, 1};
    for (int i = 0; i < 9; i++)
        cin >> height[i];
    do
    {
        int sum = 0;
        vector<int> v;

        for (int i = 0; i < 9; i++)
        {
            if (combi[i])
            {
                v.push_back(height[i]);
                sum += height[i];
            }
        }

        if (sum == 100)
        {
            sort(v.begin(), v.end());
            for (int i : v)
                cout << i << "\n";
            break;
        }
    } while (next_permutation(combi.begin(), combi.end()));
}
