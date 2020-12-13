#include <cstdio>
#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int parents[200001];
int group[200001];
int question[400001][3];
int ans[200001];

int Find(int now)
{
	if (group[now] == now)
		return now;
	return group[now] = Find(group[now]);
}

void Union(int x, int y)
{
	group[Find(x)] = group[Find(y)];
}

int main()
{
	int n, q;
	scanf("%d%d", &n, &q);
	for (int i = 2; i <= n; i++)
		scanf("%d", &parents[i]);
	for (int i = 1; i < n + q; i++)
	{
		int x;
		scanf("%d", &x);
		question[i][0] = x;
		if (x)
			scanf("%d%d", &question[i][1], &question[i][2]);
		else
			scanf("%d", &question[i][1]);
	}
	for (int i = 1; i <= n; i++)
		group[i] = i;
	int q_cnt = q;
	for (int i = n + q - 1; i >= 1; i--)
	{
		if (question[i][0])
		{
			if (Find(question[i][1]) == Find(question[i][2]))
				ans[q_cnt] = 1;
			q_cnt--;
		}
		else
			Union(question[i][1], parents[question[i][1]]);
	}
	for (int i = 1; i <= q; i++)
	{
		if (ans[i])
			printf("YES\n");
		else
			printf("NO\n");
	}
}
