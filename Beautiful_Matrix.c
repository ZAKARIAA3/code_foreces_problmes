#include <stdio.h>

int ft_abs(int n)
{
	if (n < 0)
		return -n;
	return n;
}

int main()
{
	int matrix[5][5];
	int i;
	int j;
	int x = -1, y = -1;

	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			scanf("%d", &matrix[i][j]);
			if (matrix[i][j] == 1)
			{
				x = i;
				y = j;
			}
		}
	}

	if (matrix[2][2] == 1)
	{
		printf("%d", x - y);
	}
	else
		printf("%d\n",ft_abs(x-2) + ft_abs(y-2));

	return 0;
}
