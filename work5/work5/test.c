#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int seek(int k, int* arr, int n)
{
	int left = 0;
	int right = n;
	int mid = 0;
	while (left <= right)
		{
			mid = left + (right - left) / 2;
			if (arr[mid] == k)
				break;
			else if (arr[mid] < k)
				left = mid + 1;
			else 
				right = mid - 1;
		}
	if (left > right)
		return -1;
	else
		return mid;
}
int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int k = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	printf("请输入你查找的数：");
	scanf("%d", &k);
	ret = seek(k, arr, sz);
	if (ret == -1)
	{
		printf("没找到\n");
	}
	else
		printf("找到了，下标为：%d\n", ret);
	system("pause");
	return 0;
}

//猜数字游戏
#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("***************************\n");
	printf("             1.play\n");
	printf("             2.exit\n");
	printf("***************************\n");
}
void game()
{
	int i = rand() % 100 + 1;
	int k = 0;	
	while (1)
	{
	    printf("请输入你猜的数：");
	    scanf("%d", &k);
		if (k < i)
		{
			printf("猜小了\n");
		}
		else if (k > i)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	srand(time(0));
	menu();
	int n = 0;
	while (1)
	{
		printf("请选择选项：");
	    scanf("%d", &n);
		if (n == 1)
		{
			game();
		}
		else if (n == 2)
		{
			break;
		}
		else
		{
			printf("输入错误，请重新输入");
			break;
		}
	}
	system("pause");
	return 0;
}

//模拟密码输入界面，密码正确则登录成功，密码错误则登陆失败，若三次密码都错误则推出程序
#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char password[100] = {0};
	int i = 0;
	for (i = 0; i < 3; ++i)
	{	
		printf("请输入密码：");
	    scanf("%s", &password);
		if (strcmp(password, "123456") == 0)
		{
			printf("密码正确，登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i >= 3)
		printf("三次密码均错误，退出程序\n");
	system("pause");
	return 0;
}

//从键盘输入字母，若是大写转化为小写，若是小写转换为大写，输入数字则无操作
#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a;

	while (1)
	{	
	    printf("请输入字符：");
	    scanf("%c", &a);
		if ((a <= 'z') && (a >= 'a'))
		{
			a -= 32;
			printf("%c\n", a); 
			continue;
		}
		else if ((a <= 'Z') && (a >= 'A'))
		{
			a += 32;
			printf("%c\n", a);
			continue;
		}
		else if ((a >= '0') && (a <= '9'))
			printf("请重新输入\n");
	}
	system("pause");
	return 0;
}