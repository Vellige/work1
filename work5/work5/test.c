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
	printf("����������ҵ�����");
	scanf("%d", &k);
	ret = seek(k, arr, sz);
	if (ret == -1)
	{
		printf("û�ҵ�\n");
	}
	else
		printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
	system("pause");
	return 0;
}

//��������Ϸ
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
	    printf("��������µ�����");
	    scanf("%d", &k);
		if (k < i)
		{
			printf("��С��\n");
		}
		else if (k > i)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���\n");
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
		printf("��ѡ��ѡ�");
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
			printf("�����������������");
			break;
		}
	}
	system("pause");
	return 0;
}

//ģ������������棬������ȷ���¼�ɹ�������������½ʧ�ܣ����������붼�������Ƴ�����
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
		printf("���������룺");
	    scanf("%s", &password);
		if (strcmp(password, "123456") == 0)
		{
			printf("������ȷ����½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i >= 3)
		printf("��������������˳�����\n");
	system("pause");
	return 0;
}

//�Ӽ���������ĸ�����Ǵ�дת��ΪСд������Сдת��Ϊ��д�������������޲���
#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a;

	while (1)
	{	
	    printf("�������ַ���");
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
			printf("����������\n");
	}
	system("pause");
	return 0;
}