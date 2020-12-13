#include <bits/stdc++.h>
using namespace std;

int board[14][14] = {}; // 0 없고 1 퀸
int ans = 0;
int n;
int col[14], rd[30], ld[30];

void f(int node)
{
    if(node >= n)
    {
        ans++;
        return;
    }
    for(int i = 0; i < n; i++)
    {
        if(col[i] + rd[i + node] + ld[n + node - i] == 0)
        {
            col[i] = rd[i + node] = ld[n + node - i] = 1;
            f(node + 1);
            col[i] = rd[i + node] = ld[n + node - i] = 0;
        }
    }
}

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

    cin >> n;
    f(0);
    cout << ans;
}
