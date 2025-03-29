// 달펭이 배열
#include <stdio.h>

int main() {

	int arr[5][5] = { 0 };
	int cnt = 0;

	for (int i = 0; i < 5; ++i)
	{
		int m = 9 - (2 * i);
		for (int j = 0; j < m; ++j)
		{
			if (i / 2 == 0)
			{
				if (j < m / 2)
					arr[i / 2][i / 2 + j] = ++cnt;
				else
					arr[j - m / 2][i / 2 + m / 2] = ++cnt;
			}
			else
			{
				int n = (9 - i) / 2;
				if (j <= m / 2)
					arr[n][n - 1 - j] = ++cnt;
				else
					arr[n - j + m / 2][n - m / 2] = ++cnt;
			}
		}
	}

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
			printf("%d\t", arr[i][j]);
		putchar('\n');
	}

	return 0;
}