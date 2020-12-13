#include <cstdio>
#include <iostream>
using namespace std;

int ccw(pair<int, int> a, pair<int, int> b, pair<int, int> c)
{
	int ans = a.first*b.second + b.first*c.second + c.first*a.second;
	ans -= (a.second*b.first + b.second*c.first + c.second*a.first);
	if (ans > 0)return 1;
	else if (ans == 0)return 0;
	else return -1;
}

int main()
{
	pair <int, int> a, b, c, d;
	cin >> a.first >> a.second >> b.first >> b.second >> c.first >> c.second >> d.first >> d.second;
	if (ccw(a, b, c) * ccw(a, b, d) < 0 && ccw(c, d, a) * ccw(c, d, b) < 0) cout << 1;
	else cout << 0;
}
