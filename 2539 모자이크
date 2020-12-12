#include <bits/stdc++.h>
using namespace std;
 
int row, col;
int papercnt, t;
int point[1001];
int minwidth;
 
int need(int w)
{
    int cnt = 0, dup = -1;
    for(int i = 0; i < t; i++)
    {
        if(point[i] > dup)
        {
            cnt++;
            dup = point[i] + w - 1;
        }
    }
    return cnt;
}
 
int solve()
{
    for(int i = minwidth; i <= row; i++)
    {
        if(need(i) <= papercnt)
            return i;
    }
    return 0;
}
 
int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
 
    cin >> row >> col >> papercnt >> t;
    for(int i = 0; i < t; i++)
    {
        int h;
        cin >> h >> point[i];
        minwidth = max(minwidth, h);
    }
    sort(point, point + t);
    cout << solve();
}
