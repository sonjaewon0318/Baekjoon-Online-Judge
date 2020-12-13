#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

    int ar[6][2] = {};
    int t, m; cin >> t >> m;
    while(t--)
    {
        int a, b; cin >> a >> b;
        ar[b - 1][a]++;
    }
    int ans = 0;
    for(int i = 0; i < 6;i++)
    {
        ans += (ar[i][0] + m - 1) / m;
        ans += (ar[i][1] + m - 1) / m;
    }
    cout << ans;
}
