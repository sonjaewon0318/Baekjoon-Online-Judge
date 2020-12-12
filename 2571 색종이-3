#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int ar[101][101] = {};
int t;
int n;
int stk[101], width[101], scnt;
int h, w;

void input()
{
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int a, b; cin >>a >> b;
        for(int i = a; i < a + 10; i++)
            for(int j = b; j < b + 10; j++)
                ar[i][j] = 1;
    }
}

void pre_histogram()
{
    for(int i = 0; i < 100; i++)
    {
        int x = 0;
        for(int j = 99; j >= 0; j--)
        {
            if(ar[i][j] == 1)
                ar[i][j] = ++x;
            else
                x = 0;
        }
    }
}

int histogram(int j)
{
    scnt = 0;
    for(int i = 0; i < 101; i++)
    {
        stk[i] = 0;
        width[i] = 0;
    }
    int k = 0;
    for(int i = 0; i <= 100; i++)
    {
        if(i < 100) {h = ar[i][j]; w = 1;}
        else h = 0, w = 0;
        while(scnt && stk[scnt] > h)
        {
            k = max(k, stk[scnt] * width[scnt]);
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
    return k;
}

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

    input();
    pre_histogram();
    int ans = 0;
    for(int j = 0; j < 101; j++)
    {
        ans = max(ans, histogram(j));
    }
    cout << ans;
}
