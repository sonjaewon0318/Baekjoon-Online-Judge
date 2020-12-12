#include <bits/stdc++.h>
using namespace std;

int ar[500001];
int see[500001] = {};

int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> ar[i];
    stack<pair<int, int>> s;
    for(int i = n - 1; i >= 0; i--)
    {
        int siz = s.size();
        for(int j = 0; j < siz; j++)
        {
            if(s.top().first < ar[i])
            {
                see[s.top().second] = i + 1;
                s.pop();
            }
            else if(j != 0) break;
        }
        s.push({ar[i], i});
    }
    for(int i = 0; i < n; i++)
        cout << see[i] << ' ';
}
