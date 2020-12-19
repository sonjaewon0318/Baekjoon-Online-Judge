#include <bits/stdc++.h>
using namespace std;

int b[15][15];

bool isPossible(int r, int c, int n)
{
    for(int i = 0; i < 9; i++) // 세로 탐색
    {
        if(b[i][c] == n)
            return false;
    }
    for(int i = 0; i < 9; i++) // 가로 탐색
    {
        if(b[r][i] == n)
            return false;
    }
    int sr = (r / 3) * 3, sc = (c / 3) * 3;
    for(int i = sr; i < sr + 3; i++) // 3 * 3 정사각형 탐색
    {
        for(int j = sc; j < sc + 3; j++)
        {
            if(b[i][j] == n)
                return false;
        }
    }
    return true;
}

int sudoku(int r, int c)
{
    if(c >= 9) r++, c = 0;
    if(r >= 9) return 1;

    if(b[r][c]) return sudoku(r, c + 1);
    for(int i = 1; i <= 9; i++)
    {
        if(isPossible(r, c, i))
        {
            b[r][c] = i;
            if(sudoku(r, c + 1))
                return 1;
            b[r][c] = 0;
        }
    }
    return 0;
}

int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
            cin >> b[i][j];
    }
    sudoku(0, 0);
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            cout << b[i][j] << ' ';
        }
        cout << '\n';
    }
}
