#include <bits/stdc++.h>
using namespace std;
 
using ll=long long;
int n;
int stk[100001], width[100001], scnt;
ll ans;

ll big(ll a, ll b)
{
    return (a > b) ? a : b;
}
 
int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
 
    cin >> n;
    int h, w;
    for(int i = 0; i <= n; i++)
    {
        if(i < n) {cin >> h; w = 1;}
        else h = 0, w = 0;
        while(scnt && stk[scnt] > h)
        {
            ans = big(ans, (ll)stk[scnt] * width[scnt]);
            if(stk[scnt - 1] > h)
            {
                width[scnt - 1] += width[scnt];
            }
            else
            {
                w += width[scnt];
            }
            scnt--;
        }
        if(stk[scnt] == h)
        {
            width[scnt] += w;
        }
        else
        {
            stk[++scnt] = h;
            width[scnt] = w;
        }
    }
    cout << ans;
}
