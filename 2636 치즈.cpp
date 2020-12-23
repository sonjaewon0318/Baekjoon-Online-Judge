#include <bits/stdc++.h>
using namespace std;

int ar[101][101];
int open[101][101];
int visited[101][101];
int xdir[4] = {0, 0, 1, -1};
int ydir[4] = {1, -1, 0, 0};
int n, m;

void dfs(int x, int y) // 공기가 있는 부분을 dfs
{
    visited[x][y] = 1;
    open[x][y] = 1;
    for(int i = 0; i < 4; i++)
    {
        int nx = x + xdir[i], ny = y + ydir[i];
        if(0 <= nx && nx < n && 0 <= ny && ny < m)
        {
            if(!visited[nx][ny] && ar[nx][ny] == 0)
                dfs(nx, ny);
        }
    }
}

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n >> m;
	for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cin >> ar[i][j];
    }
    int hour = 0;
    int cheeseleft = 0;
    while(1)
    {
        bool flag = false;
        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                visited[i][j] = 0;
                open[i][j] = 0;
                if(ar[i][j] == 1)
                {
                    flag = true;
                    cnt++;
                }
            }
        }
        if(!flag)
            break;
        cheeseleft = cnt;
        hour++;
        dfs(0, 0);
        for(int i = 1; i < n - 1; i++)
        {
            for(int j = 1; j < m - 1; j++)
            {
                for(int k = 0; k < 4; k++)
                {
                    int nx = i + xdir[k], ny = j + ydir[k];
                    if(open[nx][ny] == 1)
                    {
                        ar[i][j] = 0;
                        break;
                    }
                }
            }
        }
    }
    cout << hour << '\n' << cheeseleft;
}
