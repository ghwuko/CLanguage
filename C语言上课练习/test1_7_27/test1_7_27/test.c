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

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	// 趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		// 一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//#include <stdlib.h>  
//#include <string.h>


//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//
//
//int cmp_int(const void* e1, const void* e2)
//{
//	// 比较两个整型值的
//	return (*(int*)e1 - *(int*)e2);
//}
//void test1()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int cmp_float(const void* e1, const void* e2)
//{
//	// 比较两个整型值的
//	if ((*(float*)e1 == *(float*)e2))
//		return 0;
//	else if ((*(float*)e1 > *(float*)e2))
//		return 1;
//	else
//		return -1;
//	//return (int)(*(float*)e1 - *(float*)e2);  -- 存在问题
//}
//void test2()
//{
//	//float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0 };
//	float f[] = { 1.1,1.2,1.4,1.3 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%.3f ", f[i]);
//	}
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	// 字符串比较不能直接用 ><= 来比较，应该用strcmp 函数、
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",21},{"wangwu",18} };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//
//	//
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	// qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//
//}


//void qsort( void *base, 
//			size_t num, 
//			size_t width, 
//			int (*cmp)(const void* e1, const void* e2 ) 
//			);
	// 第一个参数 ： 待排序数组的首元素地址
	// 第二个参数 ： 待排序数组的元素个数
	// 第三个参数 ： 待排序数组的每个元素的大小 -- 单位是字节
	// 第四个参数 ： 是函数指针，比较两个元素的所用函数的地址 -- 这个函数使用者自己实现 。
	//				函数指针的两个参数是 ： 待比较的两个元素的地址

// 实现 bubble_sort 函数的程序员，他是否直到未来排序的数据类型 -- 不知道
// 那程序员也不知道，待比较的两个元素的类型

//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width,int (*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	// 趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		// 每一趟比较的对数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			// 两个元素的比较
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
//			{
//				// 交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
//void test4()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 使用 bubble_sort 的程序员一定指定自己排序的是什么数据
//	// 他就应该直到如何比较待排序数组中的元素
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//
//}
//
//void test5()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",21},{"wangwu",18} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_age);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	
//	//test4();
//	test5();
//
//
//	//bubble_sort(arr, sz);
//	//bubble_sort(f, sz);
//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int* pa = &a; 
//	// char* pc = &a;  // --- 会报警告
//
//	//char ch = 'w';
//	void* p = &a; //  -- 不会报警告
//	
//	// *p = 0;  //  -- 报错
//	// p++;     //  -- 报错
//	//p = &ch;
//	// void* 类型的指针 可以接受任意类型的地址
//	// void* 类型的指针 不能进行解引用操作、也不能进行 +- 整数的操作
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_int(const void* e1, const void* e2)
//{
//	// 比较两个整型值的
//	return (*(int*)e1 - *(int*)e2);
//}
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	// 字符串比较不能直接用 ><= 来比较，应该用strcmp 函数、
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
////void qsort( void *base, 
////			size_t num, 
////			size_t width, 
////			int (*cmp)(const void* e1, const void* e2 ) 
////			);
//	// 第一个参数 ： 待排序数组的首元素地址
//	// 第二个参数 ： 待排序数组的元素个数
//	// 第三个参数 ： 待排序数组的每个元素的大小 -- 单位是字节
//	// 第四个参数 ： 是函数指针，比较两个元素的所用函数的地址 -- 这个函数使用者自己实现 。
//	//				函数指针的两个参数是 ： 待比较的两个元素的地址
//
//// 实现 bubble_sort 函数的程序员，他是否直到未来排序的数据类型 -- 不知道
//// 那程序员也不知道，待比较的两个元素的类型
//
//
//void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	// 趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		// 每一趟比较的对数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			// 两个元素的比较
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				// 交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//void test4()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 使用 bubble_sort 的程序员一定指定自己排序的是什么数据
//	// 他就应该直到如何比较待排序数组中的元素
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//
//}
//
//void test5()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",21},{"wangwu",18} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_age);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//int main()
//{
//	//test4();
//	test5();
//
//	// 以前的写法 -- 有局限性  -- 只能比较单一类型的数据
//	//bubble_sort(arr, sz);
//	//bubble_sort(f, sz);
//	return 0;
//}

//int main()
//{
//	// 数组名是首元素的地址
//	// 	   两个例外
//	// 1. sizeof(数组名)  -- 数组名表示整个数组
//	// 2. &数组名        -- 表示整个数组
//	// 除此之外所有的数组名都是首元素地址
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));      // sizeof(数组名) -- 计算的是数组总大小 -- 单位是字节 -- 16
//	printf("%d\n", sizeof(a + 0));  // 数组名这里表示首元素地址，a+0 还是首元素地址，地址的大小就是   -- 4/8
//	printf("%d\n", sizeof(*a));     // 数组名表示首元素地址，*a就是首元素，sizeof(*a)就是 --4
//	printf("%d\n", sizeof(a + 1));  // 数组名这里表示首元素地址，a+1 是第二个元素的地址，地址的大小就是   -- 4/8
//	printf("%d\n", sizeof(a[1]));   // 第二个元素大小 -- 4
//	printf("%d\n", sizeof(&a));     // &a取出的是数组的地址，但是数组的地址也是的地址，地址的大小就是 --4/8
//	printf("%d\n", sizeof(*&a));    // &a是数组的地址，数组的地址解引用访问的是数组，sizeof计算的是数组的大小  -- 16
//	printf("%d\n", sizeof(&a + 1)); // &a是数组的地址，&a+1 虽然地址跳过整个数组，但还是个地址 -- 4/8
//	printf("%d\n", sizeof(&a[0]));  // &a[0]第一个元素的地址 -- 4/8
//	printf("%d\n", sizeof(&a[0] + 1)); // &a[0+1] 是第二个元素的地址 -- 4/8
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));      // sizeof计算的是数组的大小，6*1 = 6字节
//	printf("%d\n", sizeof(arr + 0));  // arr是首元素地址,arr+0还是首元素地址 --4/8
//	printf("%d\n", sizeof(*arr));     // arr是首元素地址，*arr就是首元素，首元素是字符大小是 1 个字节
//	printf("%d\n", sizeof(arr[1]));   // 1
//	printf("%d\n", sizeof(&arr));     // &arr虽然是数组的地址，但还是地址 -- 4/8
//	printf("%d\n", sizeof(&arr + 1)); // &arr+1 是跳过整个数组后的地址，地址大小是 -- 4/8
//	printf("%d\n", sizeof(&arr[0] + 1));// 第二个元素的地址 -- 4/8
//
//	printf("%d\n", strlen(arr));      // 随机值
//	printf("%d\n", strlen(arr + 0));  // 随机值
//	printf("%d\n", strlen(*arr));     // 报错
//	printf("%d\n", strlen(arr[1]));   // 报错
//	printf("%d\n", strlen(&arr));     // 随机值
//	printf("%d\n", strlen(&arr + 1)); // 随机值-6
//	printf("%d\n", strlen(&arr[0] + 1));// 随机值-1
//	return 0;
//}