#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 定义一个结构体类型
// struct -- 结构体关键字  Stu -- 结构体标签  struct Stu -- 结构体类型
//struct Stu
//{
//	// 成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};

// 不建议的写法  --- 尽量少的使用全局变量
//struct Stu1
//{
//	// 成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;// s1,s2,s3 是三个 全局 的结构体变量

//// 给这个结构体重新起名字叫Stu
//typedef struct Stu
//{
//	// 成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	// 创建结构体变量
//	struct Stu s1;
//	Stu s2;
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr };
//	printf("%s\n", t.ch); // hehe
//	printf("%s\n", t.s.arr); // hello world
//	printf("%lf\n", t.s.d); // 3.14
//	printf("%s\n", t.pc);  // hello bit
//}

//typedef struct Stu
//{
//	// 成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu tmp)
//{
//	printf(" name : %s\n age : %d\n tele : %s\n sex : %s\n", tmp.name, tmp.age, tmp.tele, tmp.sex);
//}
//
//void Print2(Stu* ps)
//{
//	printf(" name : %s\n age : %d\n tele : %s\n sex : %s\n", ps->name, ps->age, ps->tele, ps->sex);
//}
//int main()
//{
//	Stu s = { "李四",40,"15524312421","男" };
//	// 打印结构体数据
//	Print1(s);
//	Print2(&s);
//}

//int a;
//int main()
//{
//	int b;
//	//printf("%d", a);
//	//printf("%d", b);
//	return 0;
//}

//#include <math.h>
//
//int is_prime(int a)
//{
//	for (int i = 2; i < sqrt(a); i++)
//	{
//		if (a % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int a = 18;
//	if (1 == is_prime(a))
//		printf("是素数\n");
//	else
//		printf("不是素数\n");
//	return 0;
//}
//void add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("num = %d\n", num);
//	add(&num);
//	printf("num = %d\n", num);
//	add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}

//void print(int a)
//{
//	if (a > 9)
//		print(a / 10);
//	printf("%d ", a % 10);
//}
//int main()
//{
//	int a = 1234;
//	print(a);
//	return 0;
//}

//int my_strlen(char arr[])
//{
//	int i = 0;
//	int count = 0;
//	while (arr[i] != '\0')
//	{
//		i++;
//	}
//	return i;
//}

//int my_strlen(char* ch)
//{
//	if (*ch != '\0')
//		return 1 + my_strlen(ch+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int i;
//int main()
//{
//	i--;
//	// -1
//	// 10000000 00000000 00000000 00000001
//	// 11111111 11111111 11111111 11111110
//	// 11111111 11111111 11111111 11111111
//	//
//	if (i > sizeof(i))
//	{
//		printf("  >\n");
//	}
//	else
//	{
//		printf("  <\n");
//	}
//	printf("%u\n", -1);
//	return 0;
//}

//int count(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)    
//			count++;
//		a = a / 2;
//	}
//
//	return count;
//}

//int count(int a)
//{
//	int count = 0; // 1101
//	for (int i = 0; i < 32; i++)
//		if ((a >> i) & 1 )
//			count++;
//	return count;
//}

//int count(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}

//void print(int a)
//{
//	printf("奇数位：");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//
//			printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：");
//	for (int i = 31; i > 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//}
//int main()
//{
//	int a = 6;
//	print(a);
//	return 0;
//}


//int my_strlen(char* ch)
//{
//	if (*ch != '\0')
//		return 1 + my_strlen(ch+1);
//	else
//		return 0;
//}
//void ver(char arr[])
//{
//	char tmp = arr[0];
//	int n = my_strlen(arr);
//	arr[0] = arr[n - 1];
//	arr[n - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		ver(arr + 1);
//	arr[n - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	ver(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int DigitSum(int a)
//{
//	if (a > 10)
//	{
//		return a%10 + DigitSum(a / 10);
//	}
//	return a;
//}
//int main()
//{
//	int a = 1729;
//	printf("%d\n", DigitSum(a));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 3; // 011
//    int b = 5; // 101
//
//    //// 方法一（只能解决数值较小的问题）
//    //printf("交换前：a=%d,b=%d\n", a, b);
//    //// 溢出的问题
//    //// INT_MAX; 2147483647
//    //// int - 4个字节 - 32bit位 - 最大值
//    //a = a + b;
//    //b = a - b;
//    //a = a - b;
//    //printf("交换后：a=%d,b=%d\n", a, b);
//
//
//    // 方法二 (不会产生溢出问题)
//    printf("交换前：a=%d,b=%d\n", a, b);
//    // 按（二进制）位异或 --- 相同为0，相异为1
//    a = a ^ b; // 011 ^ 101 = 110
//    b = a ^ b; // 110 ^ 101 = 011 = 3
//    a = a ^ b; // 110 ^ 011 = 101
//    printf("交换后：a=%d,b=%d\n", a, b);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,7,1,2,3,4 };
//	// 方法一
//	// 暴力求解
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]); // 计算数组中的元素个数
//	//for (i = 0; i < sz; i++)
//	//{
//	//	 // 统计arr[i]在arr数组中出现的次数
//	//	 int count = 0;
//	//	 int j = 0;
//	//	 for (j = 0; j < sz; j++)
//	//	 {
//	//		if (arr[i] == arr[j])
//	//			count++;
//	//	 }
//	//	 if (count == 1)
//	//	 {
//	//		printf("找出:%d\n", arr[i]);
//	//		break;
//	//	 }
//	//}
//	
//
//	// 方法二
//	// 3 ^ 3 = 0 011 011 000
//	// 5 ^ 5 = 0 101 101 000
//	// a ^ a = 0
//	// 0 ^ 5 = 5 000 101 101
//	// 0 ^ a = a
//	//
//	// 3 ^ 5 ^ 3 = 5 011 101 110 011 101
//	// 3 ^ 3 ^ 5 = 5 011 011 000 101 101
//	// 异或 满足交换律
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h> // system
//#include <string.h> // strcmp
//int main()
//{
//	char input[20] = { 0 }; // 存储数据
//	// 关机
//	// system() -- 专门用来执行系统命令
//	system("shutdown -s -t 60"); // 关机
//again:
//	printf("电脑将在1分钟后关机，如果输入：哈哈，就取消关机\n");
//	scanf("%s", input); // %s -- 字符串、
//	if (strcmp(input, "哈哈") == 0) // 判断input中放的是不是"我是猪" -- strcmp  - string compare
//	{
//	system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0; // 4个字节 ，32个bit 位
//	// ~ 按（2进制）位取反
//	// 00000000000000000000000000000000
//	// 按位取反
//	// 11111111111111111111111111111111 (第一位上的1表示负数）
//	// 原码、反码、补码
//	// 原码符号位不变，其他位按位取反得到反码，反码加一得到补码
//	// 只要是整数，内存中存储的都是二进制的补码
//	// 正数 -- 原码、反码、补码 相同
//	// 负数：
//	// 原码 ——> 反码 ——> 补码
//	// 直接按照正负 原码的符号位不变 反码 + 1
//	// 写出的二进制序列 其他位按位取反得到
//	// 11111111111111111111111111111111
//	// 11111111111111111111111111111110
//	// 10000000000000000000000000000001
//	int b = ~a; // b是有符号的整型
//	printf("%d", b); // 打印的是这个数的原码 -- -1
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//struct Book
//{
//	char name[20]; // C语言程序设计
//	short price; // 55
//};
//int main()
//{
//	// 利用结构体类型 创建一个该类型的结构体变量
//	struct Book b1 = { "C语言程序设计",55 };
//	struct Book* pb = &b1;
//	// . 结构体变量.成员
//	// -> 结构体指针->成员
//	printf("书名：%s\n", b1.name);
//	printf("价格：%d元\n", b1.price);
//	b1.price = 15;
//	printf("修改后的价格：%d元\n", b1.price);
//	strcpy(b1.name, "哈哈哈");
//	printf("修改后的书名：%s\n", b1.name);
//	// 利用pb打印出我的书名和价格
//	printf("%s\n", (*pb).name);
//	printf("%s\n", pb->name);
//	printf("价格：%d元", pb->price);
//	return 0;
//}
