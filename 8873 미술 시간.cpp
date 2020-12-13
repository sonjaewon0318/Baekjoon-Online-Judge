#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int>> vvi;

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

    int n, m; cin >> n >> m;
    vvi r(n, vector<int>(m));
	vvi g(n, vector<int>(m));
	vvi b(n, vector<int>(m));
	for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> r[i][j];
	for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> g[i][j];
	for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> b[i][j];
    int sum = 0;
	for (int i = 0; i < n - 1; i++)
	{
        for (int j = 0; j < m - 1; j++)
        {
            sum += abs(r[i + 1][j] - r[i][j]);
            sum += abs(r[i][j + 1] - r[i][j]);
            sum += abs(g[i + 1][j] - g[i][j]);
            sum += abs(g[i][j + 1] - g[i][j]);
            sum += abs(b[i + 1][j] - b[i][j]);
            sum += abs(b[i][j + 1] - b[i][j]);
        }
	}
	sum /= n * m * 2;
	if (sum < 10) cout << 4 << '\n';
	else if (sum < 22) cout << 1 << '\n';
	else if (sum < 53) cout << 2 << '\n';
	else cout << 3 << '\n';
}
