#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int Max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数:>");
//	scanf("%d%d", &a, &b);
//	printf("%d 和 %d 中的较大值为：%d", a, b, Max(a, b));
//	return 0;
//}


//
//#include <stdio.h>
//int main()
//{
//
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 2; i++)
//    {
//        printf("     **     ");
//        printf("\n");
//    }
//
//    for (i = 0; i < 2; i++)
//    {
//        printf("************");
//        printf("\n");
//    }
//    for (i = 0; i < 2; i++)
//    {
//        printf("    *  *    ");
//        printf("\n");
//    }
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[5] = { 0 };
//    int sum = 0;
//    double avg = 0;
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%d", &arr[i]);
//        sum += arr[i];
//    }
//    avg = sum / 5.0;
//    printf("%.1lf", avg);
//    return 0;
//}

//void test()
//{
//	//static修饰局部变量
//	static int a = 0;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	return 0;
//}

//extern g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//int Add(int x, int y);
//int main()
//{
//	printf("%d\n", Add(2, 3));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 3; i < 100; i += 3)
//	{
//		printf("%d ", i);
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
// b 1 4 7 10 13 16 19 22
// a 1 2 3 4  5  6  7  8

//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	if (m < n)
//	{
//		int tmp = m;
//		m = n;
//		n = tmp;
//	}
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
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	// 9 19 29 39 49 59 69 79 89 99 
//	// 90 91 92 93 94 95 96 96 98 99
//	int i = 0;
//	int count = 0;
//	for (i = 9; i <= 100; i++)
//	{
//		if (i / 10 == 9 )
//		{
//			count++;
//		}
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("1~100中9的个数为%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double sum = 0;
//	int flag = 1;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int flag = 1;
//    double sum = 0;
//    for (i = 1; i < 101; i++)
//    {
//        sum += flag * 1.0 / i;
//        flag = -flag;
//    }
//    printf("sum = %lf", sum);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,6,7,8,9,4,5,10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标为:%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("找不到!\n");
//	}
//	return 0;
//}


//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//
//
//void fun(struct stu* p)
//{
//    printf(“ % s\n”, (*p).name);
//    return;
//}
//
//
//int main()
//{
//    struct stu students[3] = { {9801,”zhang”,20},
//                              {9802,”wang”,19},
//                              {9803,”zhao”,18}
//    };
//    fun(students + 1);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//void str_reverse(char arr[])
//{
//    int left = 0;
//    int right = strlen(arr) - 1;
//    char tmp = arr[right];
//    arr[right] = '\0';
//    if ((strlen(arr) > 2)
//        str_reverse(arr + 1);
//
//
//}
//int main()
//{
//    char arr[100] = { 0 };
//        scanf("%s", arr);
//        str_reverse(arr);
//        return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int m = 0;
//	int n = 0;
//	for (i = 0; i < 7; i++)
//	{
//		for (m = 0; m < 7 - i - 1; m++)
//		{
//			printf(" ");
//		}
//		for (n = 0; n < i * 2 + 1; n++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < 6; i++)
//	{
//		for (m = 0; m <= i; m++)
//		{
//			printf(" ");
//		}
//		for (n = 0; n <= (6 - i - 1) * 2; n++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int money = 20;
//	int empty = money;
//	int count = empty;
//
//	while (empty >= 2)
//	{
//		count += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d 元可以喝%d 瓶汽水。", money, count);
//	return 0;
//}
// 20 10 5 2 1 1