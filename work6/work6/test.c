//#define   _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0,j = 0, sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			sum = i*j;
//			printf("%d*%d = %d\t", i, j, sum);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}



//#define   _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//void swap(int* x, int* y)
//{
//	int p = 0;
//	p = *x;
//	*x = *y;
//	*y = p;
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}


//#define   _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//void leapyear(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//	{
//		printf("%d是闰年\n", x);
//	}
//	else
//		printf("%d不是闰年\n", x);
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	leapyear(year);
//	system("pause");
//	return 0;
//}


#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void init(int* arr, int k)
{
	int i = 0;
	printf("请输入定义的数组元素：");
	for (; i < k; i++)
	{
		scanf("%d", &arr[i]);
		printf("arr[%d] = %d\t", i, arr[i]);
	}
	printf("\n");
}
void empty(int* arr, int k)
{
	int i = 0;
	for (; i < k; i++)
	{
		arr[i] = 0;
		printf("arr[%d] = %d\t", i, arr[i]);
	}
	printf("\n");
}
void reverse(int* arr, int k)
{
	int i = 0;
	int temp = 0;
	int left = 0;
	int right = k - 1;
	while (left <= right)
	{
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		++left;
		--right;
	}
	for (; i < k; i++)
	{
		scanf("%d", &arr[i]);
		printf("arr[%d] = %d\t", i, arr[i]);
	}
}
int main()
{
	int arr[5] = { 0 };
	int k = 0, n = 0;
	k = sizeof(arr) / sizeof(arr[0]);
	printf("****************************\n");
	printf("        1.初始化数组\n");
	printf("        2.清空数组\n");
	printf("        3.数组元素逆置\n");
	printf("        0.退出\n");
	printf("****************************\n");
	while (1)
	{
		printf("请选择功能：");
		scanf("%d", &n);
		if (n == 1)
		{
			init(arr, k);
		}
		else if (n == 2)
		{
			empty(arr, k);
		}
		else if (n == 3)
		{
			reverse(arr, k);
		}
		else if (n == 0)
		{
			break;
		}
		else
			printf("输入错误\n");
	}
	system("pause");
	return 0;
}
