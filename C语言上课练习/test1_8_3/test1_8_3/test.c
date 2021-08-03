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
//#include <stdio.h>
//void change(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		if ((arr[left] % 2 == 0) && (arr[right] % 2 == 1))
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//		if (arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		if (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//	}
//}
//
//int main()
//{
//	// 1 2 3 4 5 6 7 8 9 10
//	// 1 9 3 7 5 6 4 8 2 10
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10,17};
//	int arr[] = {2,4,1,8,0,5,7,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	change(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "hello bit";
//	char* ret = (char*)memset(arr, 'x', 5);
//	printf("%s\n", ret);
//	return 0;
//}

//#include <stdio.h>
//void Swap2(int* pa, int* pb) {
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("a = %d, b = %d\n", a, b);
//	// Swap1(a, b);
//	Swap2(&a, &b);
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}

//#include <stdio.h>
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 2008;
//	if (1 == is_leap_year(year))
//		printf("%d是闰年\n", year);
//	else
//		printf("%d不是闰年\n", year);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int is_prime(int n)
//{
//	int x = 0;
//	for (x = 2; x <= sqrt(n); x++)
//	{
//		if (n % x == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int is_leap_year(int year)
//{
//	return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
//}
//int main()
//{
//	int year = 2000;
//	if (is_leap_year(year) == 1)
//	{
//		printf("%d 年是闰年\n", year);
//	}
//	else
//	{
//		printf("%d 年不是闰年\n", year);
//	}
//	return 0;
//}

//#include <stdio.h>
//void Swap(int* a, int* b)
//{
//	int tmp = 0;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a = %d, b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后：a = %d, b = %d\n", a, b);
//
//	return 0;
//}

#include <stdio.h>
void table(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%-2d*%2d=%-3d ", j, i, i * j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	table(n);
	return 0;
}