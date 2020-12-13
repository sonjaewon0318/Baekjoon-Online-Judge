#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int A[1001], B[1001];
vector<int> A_sum, B_sum;

int main()
{
	int t;
	scanf("%d", &t);
	int n, m;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
		scanf("%d", &A[i]);
	scanf("%d", &m);
	for (int i = 1; i <= m; i++)
		scanf("%d", &B[i]);
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum = 0;
		for (int j = i; j <= n; j++)
		{
			sum += A[j];
			A_sum.push_back(sum);
		}
	}
	for (int i = 1; i <= m; i++)
	{
		sum = 0;
		for (int j = i; j <= m; j++)
		{
			sum += B[j];
			B_sum.push_back(sum);
		}
	}
	sort(B_sum.begin(), B_sum.end());
	long long ans = 0;
	for(int i = 0; i < A_sum.size(); i++)
	{
		int diff = t - A_sum[i];
		int left = lower_bound(B_sum.begin(), B_sum.end(), diff) - B_sum.begin();
		int right = upper_bound(B_sum.begin(), B_sum.end(), diff) - B_sum.begin();
		ans += right - left;
	}
	printf("%lld", ans);
}
