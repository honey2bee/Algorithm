#include <bits/stdc++.h>
using namespace std;
int H, W;
string s;

int main()
{
    cin >> H >> W;
    for (int i = 0; i < H; i++)
    {
        cin >> s;
        int cloud = -1;
        for (int j = 0; j < W; j++)
        {
            if (cloud >= 0)
                cloud++;
            if (s[j] == 'c')
                cloud = 0;
            cout << cloud << " ";
        }
        cout << "\n";
    }
}
