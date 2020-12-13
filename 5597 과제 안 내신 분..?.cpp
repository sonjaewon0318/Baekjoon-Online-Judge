#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

    int ar[31] = {};
    for(int i = 0; i < 28; i++)
    {
        int n; cin >> n;
        ar[n - 1] = 1;
    }
    for(int i = 0; i < 30; i++)
    {
        if(!ar[i])
            cout << i + 1 << '\n';
    }
}
