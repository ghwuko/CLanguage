#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = -2;
//	// 移动的是二进制位
//	// 整数的二进制表示有：原码、反码、补码
//	// 存储到内存中的是补码
//	// 	   正数 ： 原码、反码、补码相同
//	// 10000000000000000000000000000001   -- 原码
//	// 11111111111111111111111111111110   -- 反码  ： 符号位不变，其他位按位取反
//	// 11111111111111111111111111111111   -- 补码 ：  反码加一
//	int b = a >> 1;
//	printf("%d\n", b); // -1
//	return 0;
//}

//int main()
//{
//	// &  -- 按二进制位与  -- 有一个为0就为0，两个都为1才为1
//	int a = 3; // 011
//	int b = 5; // 101
//	int c = a & b; // 001  -- 1
//	printf("c = %d\n", c);
//
//	// | -- 按二进制位或  --  有一个为 1 就为 1，两个为 0 才为 0
//	c = a | b; // 110  -- 7
//	printf("c = %d\n", c);
//
//	// ^  -- 按二进制位异或  -- 对应二进制位相同为 0 ，相异为1
//	c = a ^ b; // 110   -- 6
//	printf("c = %d\n", c); 
//	return 0;
//}


// 求一个整数存储在内存中的二进制中 1 的个数。
// 方法一
//int main()
//{
//	int num = 0;
//	int count = 0;
//
//	scanf("%d", &num);
//	// 统计 num 的补码中有几个1
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//  printf("%d\n",count);
//	return 0;
//}


// 方法二
//int main()
//{
//	int num = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &num);
//
//	// 统计 num 的补码中有几个1
//	// 0000000000000000000000011  按位与
//	// 0000000000000000000000001
//	// 0000000000000000000000001
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


// 方法三
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	short s = 0;
//	// sizeof 计算的变量所占内存空间的大小
//	printf("%d\n", sizeof(a)); // 4
//	printf("%d\n", sizeof a);  // 4
//	printf("%d\n", sizeof(int)); // 4
//
//	printf("%d\n", sizeof(c));// 1
//	printf("%d\n", sizeof(char)); // 1
//
//	printf("%d\n", sizeof(p)); // 4/8
//	printf("%d\n", sizeof(char*)); // 4/8
//
//	printf("%d\n", sizeof(arr)); // 40
//	printf("%d\n", sizeof(int [10])); // 40  -- 数组也有类型 -- 去掉数组名就是
//
//
//
//
//	printf("%d\n", sizeof(s = a + 5)); // 2   大小由s决定 -- sizeof()里的表达式不参与运算。
//	printf("%d\n", s); // 0  --  sizeof()里的表达式不参与运算。
//	return 0;
//  }


//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a); // 15
//	a = a & (~(1 << 2));
//	printf("%d\n", a);  // 11
//
//	//a = a ^ (1 << 2);
//	//printf("%d\n", a); // 11
//
//	// 00000000000000000000000000001011  
//	//     或上
//	// 00000000000000000000000000000100    -- 1 << 2
//	//     等于
//	// 00000000000000000000000000001111
//	//     与上
//	// 11111111111111111111111111111011    -- ~(1 << 2)
//	//     等于
//	// 00000000000000000000000000001011
//
//
//		// int a = 0;
//	// ~  按二进制位取反
//	// 00000000000000000000000000000000
//	// 11111111111111111111111111111111  -- 补码
//	// 11111111111111111111111111111110  -- 反码
//	// 10000000000000000000000000000001  -- 原码
//	// printf("%d\n", ~a); // -1
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);
//	return 0;
//}

//int main() 
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	// i = a++ || ++b || d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}

//int get_max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	// 调用函数时候的 ()就是函数调用操作符
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}


//// 学生类型
//struct Stu
//{
//	// 成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	// 使用 struct Stu 这个类型创建了一个学生对象s1，并初始化。
//	struct Stu s1 = { "小明",16,"20210720"};
//	struct Stu* ps = &s1;
//	// 结构体变量.成员名
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//
//	printf("%s\n", (*ps).name);
//
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//	return 0;
//}