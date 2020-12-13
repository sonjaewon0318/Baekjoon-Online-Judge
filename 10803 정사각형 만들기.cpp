#include <iostream>
#include <algorithm>
using namespace std;

int d[10001][101];
int square(int row, int col)
{
    if(d[row][col])
        return d[row][col];
    if(row==1)
        return col;
    if(col==1)
        return row;
    if(row==col)
        return 1;
    int min_cnt=123456789;
    if(row>col*3)
        min_cnt=min(min_cnt, square(row-col,col) + 1);
    else if(col > row*3)
        min_cnt=min(min_cnt, square(row, col - row) + 1);
    else
    {
        for(int i = 1; i < row; i++)
            min_cnt = min(min_cnt, square(i, col) + square(row - i, col));
        for(int i = 1; i < col; i++)
            min_cnt = min(min_cnt, square(row, i) + square(row, col - i));
    }
    d[row][col] = min_cnt;
    return min_cnt;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << square(n, m);
}
