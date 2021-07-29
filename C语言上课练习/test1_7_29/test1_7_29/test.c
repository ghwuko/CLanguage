#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	// 11001000 
//	unsigned char b = 100;
//	// 01100100   64 32
//	unsigned char c = 0;
//	c = a + b;
//	// 00000000000000000000000011001000
//	// 00000000000000000000000001100100
//	// 00000000000000000000000100101100
//	// 00101100 
//	// 4 8 32 = 44 +256
//	printf("%d %d", a + b, c);
//
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d\n", b);
//	return 0;
//}


// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// …………………………
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		int m = 0;
//		for (m = 0; m < 5-i; m++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//}

// 36 -6  18 -3 9 - 2 

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							// if(a+b+c+d+e==15)  -- 错误 -- 得不出正确结果
//							if (a * b * c * d * e == 120) 
//							{
//								printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, e);
//							}
//
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//int main()
//{
//	// 申请空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	// 使用空间
//	// *****
//	// 释放空间
//	free(p);   // free() 不会把 p 置成空指针
//	p = NULL;  // 这一步是自己应该将 p 置成空指针
//	return 0;
//}

