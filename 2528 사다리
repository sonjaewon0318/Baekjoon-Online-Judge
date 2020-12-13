#include <iostream>
#include <cstdio>
using namespace std;

struct bar
{
    int len;
    int dir;
};

int main()
{
    int n, m;
    bar bars[3001];
    scanf("%d%d", &n, &m);
    int time = 0;
    for(int i = 0; i < n; i++)
        scanf("%d%d", &bars[i].len, &bars[i].dir);
    for(int i = 1; i < n; i++)
    {
        if(bars[i].dir != bars[i - 1].dir)
        {
            int dist = (m - bars[i].len - bars[i - 1].len) / 2;
            if(dist>time) time = dist;
        }
    }
    printf("%d\n", time);
}
