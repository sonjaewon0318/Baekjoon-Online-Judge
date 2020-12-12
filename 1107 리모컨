#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int broken[10];

int possible(int ch)
{
    if(ch == 0)
    {
        if(broken[0]) return 0;
        return 1;
    }
    while(ch > 0)
    {
        if(broken[ch % 10]) return 0;
        ch /= 10;
    }
    return 1;
}

int getLen(int ch)
{
    int len = 0;
    for(int i = ch; i > 0; i /= 10)
        len++;
    return len;
}

int main()
{
    int channel, n;
    cin >> channel >> n;
    int a;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        broken[a] = 1;
    }
    int ans = channel - 100;
    if(ans < 0) ans *= -1;
    for(int i = 0; i <= 1000000; i++)
    {
        int currentChannel = i;
        if(possible(currentChannel))
        {
            int length = getLen(currentChannel);
            int presses = channel - currentChannel;
            if(currentChannel == 0) length = 1;
            if(presses < 0) presses *= -1;
            ans = min(ans, presses + length);
        }
    }
    cout << ans;
}
