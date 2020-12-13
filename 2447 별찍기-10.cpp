#include <cstdio>
#include <iostream>
#include <utility>
#include <algorithm>
#include <math.h>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <string.h>
#include <string>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stdlib.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef double lf;
typedef long double llf;

#define ret return
#define elif else if
#define newline '\n'
#define space ' '
#define tab '\t'
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second

template <typename type>
type absolute(type k)
{
	if (k > 0) ret k;
	else ret k * -1;
}

template <typename type>
type jegob(type k)
{
	ret k * k;
}

int ar[7000][7000];

void star(int x, int y, int k)
{
	if (k == 1)
	{
		ar[x][y] = 1;
		ret;
	}

	star(x, y, k / 3);
	star(x + k / 3, y, k / 3);
	star(x + k * 2 / 3, y, k / 3);
	star(x, y + k / 3, k / 3);

	star(x + k * 2 / 3, y + k / 3, k / 3);
	star(x, y + k * 2 / 3, k / 3);
	star(x + k / 3, y + k * 2 / 3, k / 3);
	star(x + k * 2 / 3, y + k * 2 / 3, k / 3);
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	star(0, 0, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ar[i][j] == 1)
				cout << "*";
			else cout << " ";
		}
		cout << newline;
	}
}
