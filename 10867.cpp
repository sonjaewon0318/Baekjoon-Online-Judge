#include <bits/stdc++.h>
using namespace std;


int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

    int n; cin >> n;
    int ar[100001];
    for(int i = 0; i < n; i++)
        cin >> ar[i];
    sort(ar, ar + n);
    cout << ar[0];
    for(int i = 1; i < n; i++)
    {
        if(ar[i] != ar[i - 1])
            cout << ' ' << ar[i];
    }
}
