#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first;
}

int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    pair<int, int> ar[10];
    for(int i = 0; i < 8; i++)
    {
        cin >> ar[i].first;
        ar[i].second = i + 1;
    }
    sort(ar, ar + 8, cmp);
    int ans = 0;
    vector<int> v;
    for(int i = 0; i < 5; i++)
    {
        ans += ar[i].first;
        v.push_back(ar[i].second);
    }
    cout << ans << '\n';
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << ' ';
}
