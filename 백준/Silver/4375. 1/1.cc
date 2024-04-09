#include <bits/stdc++.h>
using namespace std;
int n;

int main()
{
    while (scanf("%d", &n) != EOF)
    {
        int num = 1, one = 1;
        while (1)
        {
            if (one % n == 0)
            {
                printf("%d\n", num);
                break;
            }
            else
            {
                num++;
                one = one * 10 + 1;
                one %= n;
            }
        }
    }
}