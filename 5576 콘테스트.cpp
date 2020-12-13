#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

    int a[10], b[10];
    for(int i = 0; i < 10; i++) cin >> a[i];
    for(int i = 0; i < 10; i++) cin >> b[i];
    sort(a, a + 10); sort(b, b + 10);
    cout << a[9] + a[8] + a[7] << ' ' << b[9] + b[8] + b[7];
}
