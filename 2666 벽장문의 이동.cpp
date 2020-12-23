#include <bits/stdc++.h>
using namespace std;

int n;
int ans = INT_MAX;
int ar[25];
int t;

void dfs(int level, int a, int b, int sum)
{
    if(level >= t)
    {
        ans = min(ans, sum);
        return;
    }
    dfs(level + 1, ar[level], b, sum + abs(a - ar[level]));
    dfs(level + 1, a, ar[level], sum + abs(b - ar[level]));
}

int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);


    cin >> n;
    int a, b;
    cin >> a >> b;
    cin >> t;
    for(int i = 0; i < t; i++)
        cin >> ar[i];
    dfs(0, a, b, 0);
    cout << ans;
    return 0;
}
