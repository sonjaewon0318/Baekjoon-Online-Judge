#include <bits/stdc++.h>
using namespace std;

/*
          *
        *  *
      *  *  *
    *  *  *  *
  *  *  *  *  *
   *  *  *  *
    *  *  *
     *  *
      *

      0 : 0 0
      1 : 0 1 ~ 1 0
      2 : 0 2 ~ 2 0

      n : 0 n, 1 n-1 ~ n-1 1, n 0
*/

int n;
int b[21][21];

int rd[21]; // rd = _|  ld = -|

int ans = 0;


void f(int lev, int cnt)
{
    if(lev >= n * 2)
    {
        ans = max(ans, cnt);
        return;
    }
    int r = lev, c = 1, flag = 0;
    if(lev > n) r = n, c = lev - n + 1;
    for(;r > 0 && c <= n;r--, c++)
    {
        if(b[r][c] == 1 && rd[n + r - c] == 0)
        {
            rd[n + r - c] = 1;
            f(lev + 1, cnt + 1);
            rd[n + r - c] = 0;
            flag = 1;
        }
    }
    if(flag == 0)
        f(lev + 1, cnt);

}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            cin >> b[i][j];
    }
    f(0, 0);
    cout << ans;
}
