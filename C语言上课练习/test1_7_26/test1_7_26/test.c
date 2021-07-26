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


// 指针数组

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* p[] = { arr1,arr2,arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5;j++)
//		{
//			printf("%d ", *(p[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void print1(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5;j++)
//		{
//			printf("%d ", *(*(p+i)+j));
//			printf("%d ", *(p[i] + j));
//			printf("%d ", (*(p+i))[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	return 0;
//}


//void test3(int* arr) {
//
//}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test3(arr);
//	return 0;
//}

//void test1(int* p)
//{}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	test1(&a); // ok
//	test1(p);  // ok
//}

//#include <stdio.h>
//void test(int** ptr)
//{
//	//printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	int* arr[10];
//	test(arr);
//	return 0;
//}



//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3)); // 5
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello bit");
//	return 0;
//}

//// signal 是一个函数声明
//// signal 函数的参数有2个，第一个是int，第二个是函数指针，该函数指针指向的参数是int，返回类型是void。
//// signal 函数的返回类型也是一个函数指针，该该函数指针指向的参数是int，返回类型是void。
//void(*signal(int, void(*)(int)))(int);
//
//
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pa)(int, int) = Add;
//
//	printf("%d\n", (*pa)(2, 3)); // 5
//
//	printf("%d\n", (pa)(2, 3));  // 5
//	printf("%d\n", pa(2, 3)); // 5
//	printf("%d\n", Add(2, 3)); // 5
//
//
//
//	//printf("%d\n", (**pa)(2, 3)); // 5
//	//printf("%d\n", (***pa)(2, 3)); // 5
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	// 指针数组
//	int* arr[5];
//	// 需要一个数组，这个数组可以存放4个函数的地址 -- 函数指针的数组
//	int (*pa)(int, int) = Add; // Sub / Mul / Div
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div }; // 函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 3)); // 5 -1 6 0
//	}
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src);
//// 写一个函数指针pf,能够指向my_strcpy
//char* (*pf)(char*, const char*);
//
//// 写一个函数指针数组 PfArr，能够存放 4 个my_strcpy函数的地址。
//char* (*pfArr[4])(char*, const char*);



//int XOR(int x, int y)
//{
//	return x ^ y;
//}


void menu()
{
	printf("**********************************\n");
	printf("*********  1.add   2.sub  ********\n"); 
	printf("*********  3.mul   4.div  ********\n"); 
	printf("*********      0.exit     ********\n");
	printf("**********************************\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}


//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div }; // 转移表
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//
//	} while (input);
//	return 0;
//}


// 增加函数 Calc()
void Calc(int (*pf)(int,int))
{
	int x = 0;
	int y = 0;
	printf("请输入两个操作数:>");
	scanf("%d%d", &x, &y);
	printf("%d\n", pf(x, y));
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}