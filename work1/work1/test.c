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
