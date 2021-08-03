#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("*******************************\n");
//	printf("********* 1.开始游戏 **********\n");
//	printf("********* 0.退出游戏 **********\n");
//	printf("*******************************\n");
//}
//void game()
//{
//	// 生成随机数
//	int r = rand() % 100 + 1;
//	//printf("%d\n", r);
//	// 开始猜数字
//	int guess = 0;
//	printf("开始猜数字：");
//	do
//	{
//		scanf("%d", &guess);
//		if (guess < r)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了 ^_^\n");
//			break;
//		}
//		printf("再猜一次：");
//	} while (1);
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("请输入选项:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏！！\n");
//			break;
//		default:
//			printf("选择错误！\n");
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