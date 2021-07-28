#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void print(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", (*(p + i))[j]);
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", p[i][j]);
//			printf("%d ", *(p[i] + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	//char arr[] = "abcdef";
//	//char* pc = arr;
//	//printf("%s\n", arr);
//	//printf("%s\n", pc);
//	//int* arr1[10];
//	//char* arr[10];
//	//char** arr[10];
//
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[] = { 2,3,4,5,6 };
//	//int arr3[] = { 3,4,5,6,7 };
//
//	//int* parr[] = { arr1,arr2,arr3 };
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 5; j++)
//	//		printf("%d ", *(parr[i] + j));
//	//	printf("\n");
//	//}
//
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int(*p)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*p + i));
//	//	//printf("%d ", (*p)[i]);
//	//}
//
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	return 0;
//}



////void test1(int* arr)//ok？
////{}
//void test2(int* arr[5])//ok？
//{}
//void test3(int(*arr)[5])//ok？
//{}
////void test4(int** arr)//ok？
////{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test2(arr);
//}


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

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = Print;
//	// void (*)(char*)  -- 去掉变量名之后剩下的就是  类型
//	(*p)("hello bit");
//	return 0;
//}

//#include <stdlib.h>  
//#include <string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
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
//void sort1(void* base,int sz,int width,int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//int int_cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int cmp_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	sort1(arr, sz, sizeof(arr[0]), int_cmp);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test2()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",21},{"wangwu",18} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	int i = 0;
//	sort1(s, sz, sizeof(s[0]), cmp_name);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ", s[i].name);
//	}
//}
//int main()
//{
//	test1();
//	test2();
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
//
//
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));        // 7
//	printf("%d\n", sizeof(arr + 0));    // 4/8
//	printf("%d\n", sizeof(*arr));       // 1
//	printf("%d\n", sizeof(arr[1]));     // 1
//	printf("%d\n", sizeof(&arr));       // 4/8
//	printf("%d\n", sizeof(&arr + 1));   // 4/8
//	printf("%d\n", sizeof(&arr[0] + 1)); // 4/8
//
//	printf("%d\n", strlen(arr));        // 6  
//	printf("%d\n", strlen(arr + 0));    // 6
//	printf("%d\n", strlen(*arr));       // err
//	printf("%d\n", strlen(arr[1]));     // err
//	printf("%d\n", strlen(&arr));       // 6 &arr  - 数组的地址 -- 数组指针 char(*)[7] = &arr;
//	printf("%d\n", strlen(&arr + 1));   // 随机值
//	printf("%d\n", strlen(&arr[0] + 1));// 5
//
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));          // 4/8 -- 计算指针变量的大小
//	printf("%d\n", sizeof(p + 1));      // 4/8 
//	printf("%d\n", sizeof(*p));         // 1
//	printf("%d\n", sizeof(p[0]));       // 1 int arr[10]; arr[0] == *(arr+0)  p[0] == *(p+0) == 'a'
//	printf("%d\n", sizeof(&p));         // 4
//	printf("%d\n", sizeof(&p + 1));     // 4/8  -- 跳过整个字符串
//	printf("%d\n", sizeof(&p[0] + 1));  // 4/8
//
//	printf("%d\n", strlen(p));          // 6
//	printf("%d\n", strlen(p + 1));      // 5
//	printf("%d\n", strlen(*p));         // err
//	printf("%d\n", strlen(p[0]));       // err
//	printf("%d\n", strlen(&p));         // 随机值  -- &p 存的是 p 的地址，向后读取随机位后停止
//	printf("%d\n", strlen(&p + 1));     // 随机值
//	printf("%d\n", strlen(&p[0] + 1));  // 5
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));           // 48
//	printf("%d\n", sizeof(a[0][0]));     // 4
//	printf("%d\n", sizeof(a[0]));        // 16   -- a[0]相当于第一行作为一维数组的数组名，sizeof(arr[0])把数组名单独放在sizeof()内，计算的是第一行的大小
//	printf("%d\n", sizeof(a[0] + 1));    // 4/8   -- a[0] 表示的是第一行的数组名，数组名此时是首元素的地址，其实就是第一行第一个元素的地址，所以 a[0]+1 表示的是第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1))); // 4
//	printf("%d\n", sizeof(a + 1));       // 4/8   -- a 是二维数组的数组名，没用 sizeof(a)，也没有&(a)，所以 a 是首元素地址，而把二维数组看成一维数组时，二维数组的首元素是他的第一行，a就是第一行（首元素）地址，a+1 就是第二行的地址。
//	printf("%d\n", sizeof(*(a + 1)));    // 16    --  等价于sizeof(a[1])的大小
//	printf("%d\n", sizeof(&a[0] + 1));   // 4/8   -- 第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));// 16
//	printf("%d\n", sizeof(*a));          // 16  -- a 是首元素地址 -- 第一行的地址，*a就是第一行,sizeof(*a)就是计算第一行的大小
//	printf("%d\n", sizeof(a[3]));        // 16  -- 等价于 sizeof(a[0])，sizeof() 内部的表达式不参与运算，只是根据他的类型计算大小。
//	return 0;
//}

   
//语言、算法、数据结构、操作系统、网络

//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    return 0;
//}

//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{
//	//p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);   // 0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);   // 0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);   // 0x00100004
//	return 0;
//}

//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//    printf("%x,%x", ptr1[-1], *ptr2);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}


int main()
{
    int a[5][5];
    int(*p)[4];
    p = a;
    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
    return 0;
}