#pragma warning(disable : 4996)

#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<string.h>
//#define user "³ÂÍúÍú"
//#define PAS "123456"
void menu()
{
	printf("##################\n");
	printf("## 1. play    2. exit ##\n");
	printf("##################\n");
}
void game()
{
	int random_num = rand() % 100 + 1;
	int  input = 0;
	while (1)
	{
		printf(" enter your select :");
		scanf(" %d", &input);
		if (input > random_num)
		{
			printf(" your are too hight!\n");
		}
		else if (input < random_num)
		{
			printf(" your are too small!\n");
		}
		else
		{
			printf(" congratulation!,you are right\n");
			break;
		}
	}
}

int main()

{
	int  input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("ÇëÑ¡Ôñ>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			break;
		default:
			printf("error ,try again!\n");
		}
	} while (input);
	system("pause");
	return 0;
}

	
	/*char name[10];
	char password[10];
	printf("please enter your name#");
	scanf("%s", name);
	printf("please enter your password#");
	scanf("%s", password);
	int count = 3;
	while (count > 0)
	{
		count--;
		if (strcmp(user, name) == 0 && strcmp(PAS, password) == 0)
		{
			printf(" loging success !\n");
			break;
		}
		else
		{
			printf("name error or password error ,try agin ! you have %d times\n", count);
		}
	}
	if (count > 0)
	{
		printf("login sucess");
	}
	else
	{
		printf(" login failed");
	}*/
