#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d[50001];
    for(int i = 1; i <= 50000; i++)
    {
        d[i] = 1234567890;
        for(int j = 1; j * j <= i; j++)
            d[i] = min(d[i], d[i - j * j] + 1);
    }
    int n;
    scanf("%d", &n);
    printf("%d", d[n]);
}
