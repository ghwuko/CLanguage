#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("*******************************\n");
//	printf("********* 1.��ʼ��Ϸ **********\n");
//	printf("********* 0.�˳���Ϸ **********\n");
//	printf("*******************************\n");
//}
//void game()
//{
//	// ���������
//	int r = rand() % 100 + 1;
//	//printf("%d\n", r);
//	// ��ʼ������
//	int guess = 0;
//	printf("��ʼ�����֣�");
//	do
//	{
//		scanf("%d", &guess);
//		if (guess < r)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > r)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��� ^_^\n");
//			break;
//		}
//		printf("�ٲ�һ�Σ�");
//	} while (1);
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("������ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ����\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//0~9
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}