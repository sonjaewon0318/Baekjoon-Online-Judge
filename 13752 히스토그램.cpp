#include <cstdio>
#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int a;
		scanf("%d", &a);
		for (int i = 0; i < a; i++)
			printf("=");
		printf("\n");
	}
}
