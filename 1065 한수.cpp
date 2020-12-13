#include <cstdio>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <vector>
using namespace std;

int hansu(int n)
{
	vector <int> v;
	while (n != 0)
	{
		v.push_back(n % 10);
		n /= 10;
	}
	if (v.size() == 1 || v.size() == 2) return 1;
	int d = v[1] - v[0];
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] - v[i - 1] != d)
			return 0;
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		if (hansu(i))
			cnt++;
	}
	printf("%d", cnt);
}
