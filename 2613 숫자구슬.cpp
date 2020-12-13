#include <bits/stdc++.h>
using namespace std;

int n, m;
int marble[301];
vector <int> v;

int need(int k)
{
    int cnt = 0;
    int sum = 0;
    int amount = 0;
    for(int i = 0; i < n; i++)
    {
        amount++;
        if(sum + marble[i] > k)
        {
            cnt++;
            sum = marble[i];
            amount = 0;
        }
        else
        {
            sum += marble[i];
        }
    }
    cnt++;
    return cnt;
}

void printans(int k)
{
    int sum = 0;
    int amount = 0;
    for(int i = 0; i < n; i++)
    {
        if(sum + marble[i] > k)
        {
            sum = marble[i];
            v.push_back(amount);
            amount = 0;
        }
        else
        {
            sum += marble[i];
        }
        amount++;
    }
    v.push_back(amount);
}

int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n >> m;
    int low = 0, high = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> marble[i];
        low = max(low, marble[i]);
        high += marble[i];
    }
    int mid;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(need(mid) <= m)
            high = mid - 1;
        else
            low = mid + 1;
    }
    cout << low << '\n';
    printans(low);
    for(int i = v.size(); i < m; i++)
        v.push_back(0);
    for(int i = m - 1; i >= 0; i--)
    {
        if(v[i] >= 1) break;
        else
        {
            int amountget = 1 - v[i];
            v[i] = 1;
            v[i - 1] -= amountget;
        }
    }
    for(int i = 0; i < m; i++)
        cout << v[i] << ' ';
}
