#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>

#define MINX first.first
#define MINY first.second
#define MAXX second.first
#define MAXY second.second
using namespace std;

int m, n, k;
pair<pair<int, int>, pair<int, int>> input[5001];
int sx, sy, dx, dy;
int check[5001];

int check_bus(int bus1, int bus2)
{
	return input[bus1].MINX <= input[bus2].MAXX && input[bus2].MINX <= input[bus1].MAXX && input[bus1].MINY <= input[bus2].MAXY && input[bus2].MINY <= input[bus1].MAXY;

}

int main()
{
	scanf("%d%d%d", &m, &n, &k);
	for (int i = 1; i <= k; i++)
	{
		int bus, x1, y1, x2, y2;
		scanf("%d", &bus);
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		input[bus].MINX = min(x1, x2);
		input[bus].MINY = min(y1, y2);
		input[bus].MAXX = max(x1, x2);
		input[bus].MAXY = max(y1, y2);
	}
	scanf("%d%d%d%d", &sx, &sy, &dx, &dy);
	queue<pair<int, int>> q;
	for (int i = 1; i <= k; i++)
	{
		if (input[i].MINX <= sx && sx <= input[i].MAXX && input[i].MINY <= sy && sy <= input[i].MAXY)
		{
			q.push({ i, 1 });
			check[i] = 1;
		}
	}
	while (!q.empty())
	{

		int now = q.front().first;
		int cnt = q.front().second;
		q.pop();
		if (input[now].MINX <= dx && dx <= input[now].MAXX && input[now].MINY <= dy && dy <= input[now].MAXY)
		{
			printf("%d", cnt);
			return 0;
		}
		for (int i = 1; i <= k; i++)
		{
			if (!check[i] && check_bus(now, i))
			{
				check[i] = 1;
				q.push({ i, cnt + 1 });
			}
		}
	}
}
