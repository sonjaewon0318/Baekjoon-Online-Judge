#include <bits/stdc++.h>
using namespace std;


int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int d[2001] = {};
    int n, k, q; cin >> n >> k >> q;
    int s = 0;
    bool flag = false;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            int x; cin >> x;
            d[x]--;
            d[i]++;
            if(x < i)
                s++;
            if(x != 1 && i == 1)
                flag = true;
        }
    }
    if(!flag) s++;
    for(int i = 1; i <= n; i++)
    {
        if(d[i])
        {
            cout << 0;
            return  0;
        }
    }
    cout << (s <= q);
}
