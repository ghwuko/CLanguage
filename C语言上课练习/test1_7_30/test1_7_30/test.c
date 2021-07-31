#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//
//// 暴力求解法
//void left_move(char arr[], int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		// 左旋转一个字符
//		char tmp = arr[0];
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[j] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}

// 三步翻转法
// ab cdef
// ba fedc
// cdefab

//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr+k-1); // 逆序左边
//	reverse(arr+k, arr+len-1); // 逆序右边
//	reverse(arr, arr+len-1); // 逆序整体
//}
//
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}
// 
// 
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//
//	printf("%s\n", arr);
//	return 0;
//}

//int is_left_move(char* str1,char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)  // 消除 cde 是 abcdef 字串的 bug
//		return 0;
//	// 1. 在str1 字符串中追加一个str1字符串
//	// 	   strcat    --- 自己给自己追加不能用
//	// 	   strncat
//	// strcat(str1, str1);  // err 
//	strncat(str1, str1, len1);
//	// 2. 判断str2指向的字符串是否是str1指向的字符串的字串
//	// strstr -- 找字串的 -- 如果找到返回c的地址，找不到返回空指针。
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//}

//1 2 3
//4 5 6
//7 8 9

//1 2 3
//2 3 4
//3 4 5

//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while ((0 <= x && x <= row - 1) && (0 <= y && y <= col - 1))
//	//while(x<=row-1&&y>=0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}

//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while ((0 <= x && x <= *px - 1) && (0 <= y && y <= *py - 1))
//		//while(x<=row-1&&y>=0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
// 	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了 x = %d,y=%d\n",x,y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

//// 计数器方式
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//// 不能创建临时变量计数器
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}

//// 指针 - 指针的方式
//int my_strlen(const char* str)
//{
//	int* p = str;
//	while (*p)
//	{
//		p++;
//	}
//	return p - str;
//}

//#include <assert.h>
//void my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	// 拷贝 src 指向的字符串到 dest 指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	// 返回目的空间的起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src);
//	char* ret = dest;
//	// 1. 找到目的字符串的 '\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	// 2. 追加
//	while (*dest++ == *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//}

//int main()
//{
//	// vs 2019
//	// == 1
//	// == 0
//	// == -1
//
//	// linux-gcc
//	// > 0
//	// == 0
//	// < 0
//	char* p1 = "abcdef";
//	char* p2 = "bc";
//	
//	int ret = strcmp(p1, p2);
//	if (strcmp(p1, p2) > 0)
//	{
//		printf("p1>p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("p1==p2\n");
//	}
//	else
//	{
//		printf("p1<p2\n");
//	}
//	return 0;
//}

//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 != NULL);
//	assert(s2 != NULL);
//	// 比较
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return (*s1 - *s2);
//}
//int main()
//{
//	// vs 2019
//	// == 1
//	// == 0
//	// == -1
//
//	// linux-gcc
//	// > 0
//	// == 0
//	// < 0
//
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}

int main()
{
	return 0;
}