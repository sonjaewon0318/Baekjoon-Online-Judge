#include <cstdio>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <stdlib.h>
#include <vector>
using namespace std;

int origin[501];
int d[501][501];
int sum[501];

int dfs(int s, int e)
{
	if (d[s][e])
		return d[s][e];
	if (s == e)
		return 0;
	int ret = 1234567890;
	for (int mid = s; mid < e; mid++)
		ret = min(ret, dfs(s, mid) + dfs(mid + 1, e) + sum[e] - sum[s - 1]);
	d[s][e] = ret;
	return ret;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		for (int i = 0; i < 501; i++)
		{
			origin[i] = 0;
			for (int j = 0; j < 501; j++)
				d[i][j] = 0;
		}
		int n;
		scanf("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			scanf("%d", &origin[i]);
			sum[i] = sum[i - 1] + origin[i];
		}
		printf("%d ", dfs(1, n));
	}
}
