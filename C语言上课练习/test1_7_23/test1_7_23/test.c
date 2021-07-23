#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(int));
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d\n", *(p++));
//	//	// printf("%d\n", *p);
//	//	// p = p + 1;
//	//}
//
//	int* p = &arr[9];
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p--);
//	}
//	return 0;
//}


//#define NUM 5
//int main()
//{
//	float arr[NUM];
//	float* pa;
//
//	for (pa = &arr[NUM]; pa > &arr[0];)
//	{
//		*--pa = 0;
//		printtf("%f", *pa);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}

//int i;
//int main()
//{
//	int j;
//	printf("%d\n", i); // 0
//	// printf("%d\n", j); // 报错
//	return 0;
//}


//int i;
//int main()
//{
//	i--;
//	// -1
//	// 10000000 00000000 00000000 00000001
//	// 11111111 11111111 11111111 11111110
//	// 11111111 11111111 11111111 11111111
//	//
//	if (i > sizeof(i))
//	{
//		printf("  >\n");
//	}
//	else
//	{
//		printf("  <\n");
//	}
//	printf("%u\n", -1);
//	return 0;
//}



//int main()
//{
//    // 00000000 00000000 00000000 00000100
//    // 00000000 00000000 00000000 00001000
//    // 10000000000000000000000000000000100
//    // 01111111111111111111111111111111011
//    // 01111111111111111111111111111111110  -- 4294967292
//    if (sizeof(int) - sizeof(double) < 0)
//    {
//        printf("<\n");
//    }
//    else
//    {
//        printf(">=\n");
//    }
//    printf("%u\n", sizeof(int) - sizeof(double));// 4294967292
//    return 0;
//}

//int main(void) {
//    unsigned int a = 10;
//    unsigned int b = 11;
//    if ((a - b) >= 0) {
//
//        printf("%u \n", (a - b));
//    }
//}


//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;  // 先算 b = ++c, 再算后边的。
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n", a, b, c);
//}
// 运行结果
// a = 9 b = 23 c = 8

//#include <stdlib.h>
//
//// 代码存在缺陷，不能求负数
////int count_bit_one(int n)
////{
////	int count = 0;
////	while (n)
////	{
////		if (n % 2 == 1)
////		{
////			count++;
////		}
////		n /= 2;
////
////	}
////	return count;
////}
//
//// 改进代码
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//
//	}
//	return count;
//}
//
//int count_bit_one2(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{		
//		if ((n>>i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int count_bit_one3(int n)
//{
//	// n = n&(n-1)
//	// n
//	// 13
//	// 1101    n
//	// 1100    n-1
//	// 1100    n
//	// 1011    n-1
//	// 1000    n
//	// 0111    n-1
//	// 0000    n
//
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	// int count = count_bit_one(a);
//	// int count = count_bit_one2(a);
//	int count = count_bit_one3(a);
//	printf("count = %d\n", count);
//	// system("pause"); // system 库函数 -- 执行系统命令 - pause(暂停)
//	return 0;
//}


//int get_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count == %d\n", count);
//
//	return 0;
//}

//void print(int n)
//{
//	int i = 0;
//	printf("奇数位:>");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位:>");
//	for (i = 31; i > 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//void print(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//void ver(char arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 2;
//	while (left < right)
//	{
//		char a = arr[left];
//		arr[left] = arr[right];
//		arr[right] = a;
//		left++;
//		right--;
//	}
//
//}

//#include <string.h>
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = strlen(arr);//6 // 4
//	arr[0] = arr[len - 1]; // arr[0] = a
//	arr[len - 1] = '\0';  //  arr[5] = \0
//	if(strlen(arr+1) >= 2)
//		reverse_string(arr+1);
//	
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}