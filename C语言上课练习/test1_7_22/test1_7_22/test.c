#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define NUM 5
//int main()
//{
//	//float a = 3.4f;
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof(long int));
//
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	const int num = 4;
//	//num = 5;
//	//printf("%d\n", num);
//
//	int arr[NUM] = { 0 };
//
//	enum Sex s = FEMALE;
//	printf("%d\n", s);
//	// printf("%s\n", s);
//
//	s = SECRET;
//	printf("%d\n", s);
//	// printf("%s\n", s);
//	return 0;
//}

//#include <string.h>
//int main()
//{
//    // 数据在计算机上存储的时候，存储的是2进制
//    // ASCII 编码    ASCII 码值
//    //    A             65
//    //    a             97
//    //    \0            0
//    char arr1[] = "abc";
//    // "abc" --- 'a' 'b' 'c' '\0'  ---> '\0'字符串结束标志
//    char arr2[] = { 'a','b','c' };
//    char arr3[] = { 'a','b','c','\0' }; // '\0'的值为0，所以这里最后一个字符写'\0'或0都可以
//
//    printf("%s\n", arr1); // abc
//    printf("%s\n", arr2); // abc烫烫烫烫蘟bc
//    // 打印完 'a' 'b' 'c' 之后不会结束，会接着打印随机值。
//    printf("%s\n", arr3); // abc
//
//    // strlen -- strlen length -- 计算字符串长度(不将'\0'算在内)
//    printf("%d\n", strlen(arr1)); // 3
//    printf("%d\n", sizeof(arr1) / sizeof(arr1[1]));
//    printf("%d\n", strlen(arr2)); // 随机值 （a b c x x x x x）
//    printf("%d\n", strlen(arr3)); // 3
//    return 0;
//}


//int main()
//{
//	int a = 0;
//	// 00000000000000000000000000000
//	int b = ~a;
//	// 11111111111111111111111111111
//	// 11111111111111111111111111110
//	// 10000000000000000000000000001
//	printf("%d\n", b); // -1
//	return 0;
//}

//int  main()
//{
//	//int a = 10;
//	//int* p = &a;
//	//printf("%d\n", a);
//	//*p = 20;
//	//printf("%d\n", a);
//
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//int main()
//{
//    //int ch = 0;
//    //int ret = 0;
//    //char pass[20] = { 0 };
//    //printf("请输入密码:>");
//    //scanf("%s", pass);
//    //while (ch = getchar() != '\n')
//    //{
//    //    ;
//    //}
//    //printf("请确认（Y/N）:>");
//    //ret = getchar();
//    //if ('Y' == ret)
//    //    printf("确认正确\n");
//    //else
//    //    printf("确认失败\n");
//    //char arr[] = "hello bit";
//    //printf("%s\n", arr);
//
//    //int i = 0;
//    //int j = 0;
//    //int n = 0;
//    //int m = 1;
//    //int sum = 0;
//    //printf("输入一个数：>");
//    //scanf("%d", &n);
//    //for (i = 1; i <= n; i++)
//    //{
//    //    m = 1;
//    //    for (j = 1; j <= i; j++)
//    //        m *= j;
//    //    sum += m;
//    //    
//    //}
//
//    //for (i = 1; i <= n; i++)
//    //{
//    //    m *= i;
//    //    sum += m;
//    //}
//
//    //printf("%d\n",sum);
//
//    int n = 81;
//    int arr[] = { 1,2,3,4,5,6,7,8,9 };
//    int left = 0;
//    int right = sizeof(arr) / sizeof(arr[0]);
//    int mid = 0;
//    /*printf("请输入一个数\n");
//    scanf("%d", &n);*/
//    while (left <= right)
//    {
//        mid = (left + right) / 2;
//        if (arr[mid] > n)
//            right = mid - 1;
//        if (arr[mid] < n)
//            left = mid + 1;
//        if (arr[mid] == n)
//        {
//            printf("%d", mid);
//            break;
//        }
//    }
//    if (left > right)
//        printf("没有找到");
//    return 0;
//}

//#include <string.h>
//
//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	puts(str);
//	return 0;
//}


// 1234 
// 1234 / 10 = 123
// 1234 % 10 = 4 
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//	
//}
//int main()
//{
//	int n = 1234;
//	print(n);
//	return 0;
//}


//#include <string.h>
//int my_strlen(char* str) 
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	char arr[] = "hello";
//	printf("字符串长度为：%d", my_strlen(arr));
//	return 0;
//}

//int Fan(int n)
//{
//	if (n == 0 || n == 1)
//		return 1;
//	else
//		return n * Fan(n - 1);
//}

//void print(int arr[],int sz)
//{
//	for (int i = 0; i < sz; i++)
//		pritf("%d", arr[i]);
//}
//int main()
//{
//	//int arr1[10] = { 1,2,3 };
//	//int sz = sizeof(arr1) / sizeof(arr1[0]);
//	//// print(arr1, sz);
//	//
//	//printf("%d",sizeof(arr1));
//
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	//*pa = 0;
//	char* pc = &a;
//
//	//printf("%p\n", pa);  // 000000ACB0DFFB14
//	//printf("%p\n", pc);  // 000000ACB0DFFB14  -- 警告 "初始化"：从"int*"到"char*"的类型不兼容
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);   // 0000004EDF8FF4F4
//	printf("%p\n", pa+1); // 0000004EDF8FF4F8
//
//	printf("%p\n", pc);   // 0000004EDF8FF4F4
//	printf("%p\n", pc+1); // 0000004EDF8FF4F5
//}


int main()
{
	int arr[10] = { 0 };
	int* p = arr;//数组名  -- 首元素的地址
	// char* p = arr; 不能将数组全部改成1，只能将前十个字节改成1
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

