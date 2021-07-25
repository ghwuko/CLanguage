#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int i = 0;
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    printf("%p\n", arr);
//    printf("%p\n", &i);
//    system("pause");
//
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hehe\n");
//    }
//    return 0;
//}

// #include <string.h>


//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src; // '\0'
//}
//int main()
//{
//	// strcpy
//	// 字符串拷贝
//	char arr1[] = "###################";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//	
//}
//
#include <assert.h>

//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL); // 断言
//	assert(src != NULL);
//
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//}


//int main()
//{
//	int a, b, c;
//	printf("输入b c 的值：》");
//	scanf("%d %d", &b, &c);
//	assert(c);
//	a = b / c;
//	printf("%d\n", a);
//	return 0;
//}




//int main()
//{
//	const int num = 10;
//	int n = 100;
//	//const int* p = &num;
//	// //*p = 20;   // error      const 放在指针变量的 * 左边时，修饰的是 *p，也就是说：不能通过 p 来改变 *P （num）的值。
//	//p = &n;
//
//
//	//int* const p = &num; 
//	//*p = 20;  
//	// //p = &n;     // error       const 放在指针变量的 * 右边时，修饰的是指针变量 p 本身，p不能被改变。
//
//	const int* const p = &num;
//	// *p = 20;    // error
//	// p = &n;     // error
//	printf("%d\n", num);  // 20
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL); // 断言
//	assert(src != NULL);  // 断言
//
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	// strcpy
//	// 字符串拷贝
//	char arr1[] = "###################";
//	char arr2[] = "bit";
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL); // 断言指针  -- 保证指针的有效性。
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	float f = 10.0;
//
//	//printf("%d\n", a);
//	return 0;
//}

//void test(void)
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test(100);
//	return 0;
//}


//int main()
//{
//	int a = 20; // 4个字节 -- 32bit
//	// 00000000000000000000000000010100  -- 原码
//	// 00000000000000000000000000010100  -- 反码
//	// 00000000000000000000000000010100  -- 补码
//	// 0x00000014
//	int b = -10;
//	// 10000000000000000000000000001010  -- 原码
//	// 11111111111111111111111111110101  -- 反码
//	// 11111111111111111111111111110110  -- 补码
//	// 0xfffffff6
//	return 0;
//}

// 方法1

//int check_sys()
//{
//	int a = 1;
//	// 0x 00000001
//	// char* p = (char*)&a; // char* p = &a;  -- 会报警告 -- “初始化”：从“int"到“char *”的类型不兼容。
//	// 返回1，小端
//	// 返回0，大端
//	return *(char*)&a;
//}
//int main()
//{
//	// 返回1，小端
//	// 返回0，大端
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端存储\n");
//	}
//	else
//	{
//		printf("大端存储\n");
//	}
//	return 0;
//}

//int main()
//{
//    char a = -1;
//    signed char b = -1;
//    unsigned char c = -1;
//    // 10000001
//    // 11111110
//    // 11111111
//    printf("a=%d,b=%d,c=%d", a, b, c);
//    return 0;
//}

//int main()
//{
//        char a = -128;
//    // 10000000000000000000000010000000
//    // 11111111111111111111111101111111
//    // 11111111111111111111111110000000  -- 补码
//    // 10000000
//    // 11111111111111111111111110000000  -- 整型提升  -- 补码  -- 无符号数 -- 也是原码
//    printf("%u\n", a); // 打印十进制无符号数字
//    return 0;
//}

//int main()
//{ 
//	int i = -20;
//	// 10000000000000000000000000010100
//	// 11111111111111111111111111101011
//	// 11111111111111111111111111101100 -- 补码
//	unsigned int j = 10;
//	// 00000000000000000000000000001010
//	// 11111111111111111111111111110110  -- 和的补码
//	// 11111111111111111111111111110101
//	// 10000000000000000000000000001010
//	printf("%d\n", i + j);// -10
//	return 0;
//}

//
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

//int main()
//{
//    char a[1000];
//    int i;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//    return 0;
//}

//#include <Windows.h>
//unsigned char i = 0;
//int main()
//{
//    for (i = 0; i <= 255; i++)
//    {
//        printf("hello world === %d\n",i);
//    }
//    Sleep(100);
//    return 0;
//}

// 9.0
// 1001.0
// 
int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);  // 9
	printf("*pFloat的值为：%f\n", *pFloat); // 0.000000

	*pFloat = 9.0;
	printf("num的值为：%d\n", n); // 1091567616
	printf("*pFloat的值为：%f\n", *pFloat); // 9.000000
	return 0;
}
