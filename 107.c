#pragma warning(disable : 4996)


#include<stdio.h>
# include<Windows.h>

	int gcd(int m,int n)
	{
		int g;
		if (n == 0)
			g = m;
		else
			g = gcd(n, m%n);
		return (g);

	}

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	printf("gcd=%d", gcd(m, n));
	system("pause");
	return 0;
}

