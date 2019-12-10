#pragma warning(disable : 4996)

#include<stdio.h>
# include<Windows.h>

int main()
{
	int i=1, j = 1;
	for (i = 1; i <= 9; i++){
		for (j = 1; j <= 9; j++)
			printf("%  d * %  d = % 2d\t", i, j, i*j);
		printf("\n");
	}



	system("pause");
	return 0;
}