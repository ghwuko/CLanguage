#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void test(char** p)
//{
//
//}
//int main()
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];
//	test(&pc);
//	test(ppc);
//	test(arr);//Ok?
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr; // 取出数组的地址
//
//	int (*pf)(int, int); // 函数指针
//	int (*pfArr[4])(int, int); // pfArr 是一个数组 - 函数指针的数组
//	// ppfArr 是一个指向 【函数指针数组】 的指针
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//	// ppfArr 是一个数组指针，指针指向的数组有4个元素
//	// 指向的数组的每个元素的类型是一个函数指针   int(*)(int, int)
//	return 0;
//}

//void print(char* str)
//{
//	printf("hehe:%s\n", str);
//}
//
//void test(void (*p)(char*) )
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//
//	test(print);
//	return 0;
//}

// void qsort( void *base, 
//			   size_t num, 
//			   size_t width, 
//			   int (__cdecl *compare )(const void *elem1, const void *elem2 ) 
//			   );
// qsort 函数的使用者得实现一个比较函数
//int int_cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//
//int main()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int i = 0;
//
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	// 趟数
	for (i = 0; i < sz - 1; i++)
	{
		// 一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

struct Stu
{
	char name[20];
	int age;
};

void qsort( void *base, 
			size_t num, 
			size_t width, 
			int (*cmp)(const void *e1, const void *e2 ) 
			);

int int_cmp(const void* p1, const void* p2)
{
	// 比较两个整型值的
	return (*(int*)p1 - *(int*)p2);
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	struct Stu s[3] = { {"zhangsan",20},{"lisi",21},{"wangwu",18} };
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };


	//bubble_sort(arr, sz);
	//bubble_sort(f, sz);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}