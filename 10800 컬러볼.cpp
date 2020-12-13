#include <iostream>
#include <cstdio>
#include <algorithm>
#include <utility>
using namespace std;

struct ball
{
    int color;
    int size;
    int index;
};

bool cmp(ball a, ball b)
{
    return a.size < b.size;
}

int main()
{
    int n;
    scanf("%d", &n);
    ball balls[200001];
    int ans[200001];
    int colorSum[200001] = {0, };
    for(int i = 0; i < n; i++)
    {
        scanf("%d%d", &balls[i].color, &balls[i].size);
        balls[i].index = i;
    }
    sort(balls, balls + n, cmp);
    int j = 0;
    int total = 0;
    for(int i = 0; i < n; i++)
    {
        while(balls[j].size < balls[i].size)
        {
            total += balls[j].size;
            colorSum[balls[j].color] += balls[j].size;
            j++;
        }
        ans[balls[i].index] = total - colorSum[balls[i].color];
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", ans[i]);
    }
}
