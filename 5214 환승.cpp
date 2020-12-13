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

vector<int> node[200001];
int check[200001];

int main()
{
	int n, k, m;
	scanf("%d%d%d", &n, &k, &m);
	for (int i = 1; i <= m; i++)
	{
		for (int j = 0; j < k; j++)
		{
			int x;
			scanf("%d", &x);
			node[x].push_back(100000 + i);
			node[100000 + i].push_back(x);
		}
	}
	queue <int> q;
	q.push(1);
	check[1] = 1;
	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		for (int i = 0; i < node[now].size(); i++)
		{
			int next = node[now][i];
			if (!check[next])
			{
				check[next] = check[now] + 1;
				q.push(next);
			}
		}
	}
	if (check[n])
		printf("%d", (check[n] + 1) / 2);
	else
		printf("-1");
}
