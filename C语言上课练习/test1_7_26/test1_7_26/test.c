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
//    // char* p = "abcdef"; // "abcdef" ��һ�������ַ���
//    const char* p = "abcdef"; // ��׼ȷ��д��
//    printf("%s\n", p); // abcdef
//    printf("%c\n", *p); // a
//
//    // *p = 'W'; // ����  -- "abcdef" �� �����ַ���
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
//	// int* p = NULL; // p ������ָ��  -- ָ�����͵�ָ��   -- ���Դ�����͵ĵ�ַ
//	// char* pc = NULL; // pc ���ַ�ָ�� -- ָ���ַ���ָ�� --  ���Դ���ַ��ĵ�ַ
//	// ����ָ�� -- ָ�������ָ��  -- �������ĵ�ַ
//
//	// int arr[10] = { 0 };
//	// arr -- ��Ԫ�صĵ�ַ
//	// &arr[0] -- ��Ԫ�صĵ�ַ
//	// &arr  -- ����ĵ�ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	// ����� p ��������ָ��
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
//    int(*p)[10] = &arr;//������arr�ĵ�ַ��ֵ������ָ�����p
//    //��������һ���������д����
//
//    int i = 0;
//    // ���ֿ��
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


//// �������������ʽ
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
//// ������ָ�����ʽ
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