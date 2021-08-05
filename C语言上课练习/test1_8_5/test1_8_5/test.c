#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void change(int arr1[], int arr2[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr1[] = { 1,1,1,1,1,1,1,1 };
	int arr2[] = { 2,2,2,2,2,2,2,2 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	printf("交换前arr1数组:");
	print(arr1, sz);
	printf("交换前arr2数组:");
	print(arr2, sz);
	change(arr1, arr2, sz);
	printf("交换后arr1数组:");
	print(arr1, sz);
	printf("交换后arr2数组:");
	print(arr2, sz);
	return 0;
}

//void my_sort(int arr[], int sz)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < sz - 1 ; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//		count++;
//	}
//	printf("%d\n", count);
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,8,6,7,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	my_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//    long long a = 0;
//    long long b = 0;
//    long long gcd = 0;
//    long long clm = 0;
//    long long sum = 0;
//    scanf("%lld%lld", &a, &b);
//    clm = a * b;
//    while (gcd = a % b)
//    {
//        a = b;
//        b = gcd;
//    }
//    clm /= b;
//    sum = b + clm;
//    printf("%llu\n", sum);
//    return 0;
//}
//int main()
//{
//    int arr[7] = { 0 };
//    int i = 0;
//    int sum = 0;
//    for (i = 0; i < 7; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    // 找最高分
//    for (i = 1; i < 7; i++)
//    {
//        if (arr[0] < arr[i])
//        {
//            int tmp = arr[0];
//            arr[0] = arr[i];
//            arr[i] = tmp;
//        }
//    }
//    // 找最低分
//    for (i = 2; i < 7; i++)
//    {
//        if (arr[1] < arr[i])
//        {
//            int tmp = arr[1];
//            arr[1] = arr[i];
//            arr[i] = tmp;
//        }
//    }
//
//    for (i = 2; i < 7; i++)
//    {
//        sum += arr[i];
//    }
//    printf("%.2lf", sum / 5.0);
//    return 0;
//}
////#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    unsigned long long gcd = 0;
//    unsigned long long clm = 0;
//    unsigned long long sum = 0;
//    scanf("%d%d", &a, &b);
//    clm = a * b;
//    while (gcd = a % b)
//    {
//        a = b;
//        b = gcd;
//    }
//    clm /= b;
//    sum = b + clm;
//    printf("%lld\n", sum);
//    return 0;
//}
//int con(int n1)
//{
//    if (n1 > 5) 
//        return n1 % 6 + con(n1 / 6) * 10;
//    else
//        return n1; 
//}
//int main()
//{
//    int  n = 0;
//    scanf("%d", &n);
//    printf("%d\n", con(n));
//    return 0;
//}



//#include <stdio.h>
//double my_pow(int n, int k)
//{
//	if (0 == k)
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{
//		return n * my_pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / my_pow(n, -k);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%d的%d次方为：%lf\n", n, k, my_pow(n, k));
//	return 0;
//}

//int main()
//{
//    int ch = 0;
//    // EOF -- end of file --文件结束标志
//    while ((ch = getchar()) != EOF) // 输入EOF 循环并不会结束，而是执行三次循环，读取三次，输出EOF，只有按ctrl+z才能终止循环。
//        putchar(ch);
//    return 0;
//}

//#include <stdio.h>
//
//int my_pow(int n, int k)
//{
//	if (k >= 1)
//		return n * my_pow(n, k - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%d的%d次方为：%d\n", n, k, my_pow(n, k));
//	return 0;
//}