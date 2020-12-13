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

typedef unsigned int ui;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef tuple<int, int, int> ti3;
typedef tuple<int, int, int, int> ti4;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef tuple<ll, ll, ll> tl3;
typedef tuple<ll, ll, ll, ll> tl4;

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
#define cont continue
#define rep(i,a,b) for(int i = a; i < b; i++)
#define sz(a) ((ll)(a.size()))
#define sf1(a) cin >> a
#define sf2(a,b) cin >> a >> b
#define sf3(a,b,c) cin >> a >> b >> c
#define sf4(a,b,c,d) cin >> a >> b >> c >> d
#define sf5(a,b,c,d,e) cin >> a >> b >> c >> d >> e
#define sf6(a,b,c,d,e,f) cin >> a >> b >> c >> d >> e >> f
#define pf1(a) cout << (a) << ' '
#define pf2(a,b) cout << (a) << ' ' << (b) << ' '
#define pf3(a,b,c) cout << (a) << ' ' << (b) << ' '<< (c) << ' '
#define pf4(a,b,c,d) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << ' '
#define pf5(a,b,c,d,e) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << ' '<< (e) << ' '
#define pf6(a,b,c,d,e,f) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << ' '<< (e) << ' ' << (f) << ' '
#define pfl1(a) cout << (a) << '\n'
#define pfl2(a,b) cout << (a) << '\n' << (b) << '\n'
#define pfl3(a,b,c) cout << (a) << '\n' << (b) << ' '<< (c) << '\n'
#define pfl4(a,b,c,d) cout << (a) << '\n' << (b) << '\n'<< (c) << '\n'<< (d) << '\n'
#define pfl5(a,b,c,d,e) cout << (a) << '\n' << (b) << '\n'<< (c) << '\n'<< (d) << '\n'<< (e) << '\n'
#define pfl6(a,b,c,d,e,f) cout << (a) << '\n' << (b) << '\n'<< (c) << '\n'<< (d) << '\n'<< (e) << '\n' << (f) << '\n'
#define pf0nl() cout << '\n';
#define pf1nl(a) cout << (a) << '\n'
#define pf2nl(a,b) cout << (a) << ' ' << (b) << '\n'
#define pf3nl(a,b,c) cout << (a) << ' ' << (b) << ' '<< (c) << '\n'
#define pf4nl(a,b,c,d) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << '\n'
#define pf5nl(a,b,c,d,e) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << ' '<< (e) << '\n'
#define pf6nl(a,b,c,d,e,f) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << ' '<< (e) << ' ' << (f) << '\n'

/*   ------------------------------------------------------------------------------   */

bool cmp(int a, int b) { ret a > b; }

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	//ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	int a[101], b[101];
	rep(i, 0, n)
		cin >> a[i];
	rep(i, 0, n)
		cin >> b[i];
	sort(a, a + n);
	sort(b, b + n, cmp);
	int ans = 0;
	rep(i, 0, n)
	{
		ans += a[i] * b[i];
	}
	cout << ans;
}
