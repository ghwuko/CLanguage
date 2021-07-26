#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    char arr[] = "abcdef";
//    char* pc = arr;
//    printf("%s\n", arr);
//    printf("%s\n", pc);
//    return 0;
//}

//int main()
//{
//    // char* p = "abcdef"; // "abcdef" 是一个常量字符串
//    const char* p = "abcdef"; // 最准确的写法
//    printf("%s\n", p); // abcdef
//    printf("%c\n", *p); // a
//
//    // *p = 'W'; // 报错  -- "abcdef" 是 常量字符串
//    printf("%s\n", p);
//    return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("  arr1 == arr2\n");
//	}
//	else
//	{
//		printf("  arr1 != arr2\n");
//	}
//
//	if (p1 == p2)
//	{
//		printf("  p1 == p2\n");
//	}
//	else
//	{
//		printf("  p1 != p2\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	// int* p = NULL; // p 是整型指针  -- 指向整型的指针   -- 可以存放整型的地址
//	// char* pc = NULL; // pc 是字符指针 -- 指向字符的指针 --  可以存放字符的地址
//	// 数组指针 -- 指向数组的指针  -- 存放数组的地址
//
//	// int arr[10] = { 0 };
//	// arr -- 首元素的地址
//	// &arr[0] -- 首元素的地址
//	// &arr  -- 数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	// 上面的 p 就是数组指针
// 	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf(" arr = %p\n", arr);
//	printf(" &arr = %p\n", &arr);
//
//	printf(" arr+1 = %p\n", arr + 1);
//	printf(" &arr+1= %p\n", &arr + 1);
//	return 0;
//}

//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int(*p)[10] = &arr;//把数组arr的地址赋值给数组指针变量p
//    //但是我们一般很少这样写代码
//
//    int i = 0;
//    // 自讨苦吃
//    //for (i = 0; i < 10; i++)
//    //{
//    //    printf("%d ", *(*p + i)); // *p = arr
//    //}
//    //for (i = 0; i < 10; i++)
//    //{
//    //    printf("%d ", (*p)[i]);
//    //}
//    return 0;
//}


//// 参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//// 参数是指针的形式
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			// printf("%d ", *(*(p+i)+j));
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int i = 0;
//	//int* p = arr;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", p[i]);
//	//	printf("%d ", *(p + i));
//	//	printf("%d ", *(arr + i));
//	//	printf("%d ", arr[i]); 
//	//	// arr[i] == *(arr+i) == *(p+i) == p[i]
//	//}
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//
//
//
//	return 0;
//}