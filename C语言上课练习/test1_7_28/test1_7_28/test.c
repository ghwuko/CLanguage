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



////void test1(int* arr)//ok��
////{}
//void test2(int* arr[5])//ok��
//{}
//void test3(int(*arr)[5])//ok��
//{}
////void test4(int** arr)//ok��
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
//	// void (*)(char*)  -- ȥ��������֮��ʣ�µľ���  ����
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
//	// ��һ������ �� �������������Ԫ�ص�ַ
//	// �ڶ������� �� �����������Ԫ�ظ���
//	// ���������� �� �����������ÿ��Ԫ�صĴ�С -- ��λ���ֽ�
//	// ���ĸ����� �� �Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ -- �������ʹ�����Լ�ʵ�� ��
//	//				����ָ������������� �� ���Ƚϵ�����Ԫ�صĵ�ַ
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
//	// ����������Ԫ�صĵ�ַ
//	// 	   ��������
//	// 1. sizeof(������)  -- ��������ʾ��������
//	// 2. &������        -- ��ʾ��������
//	// ����֮�����е�������������Ԫ�ص�ַ
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));      // sizeof(������) -- ������������ܴ�С -- ��λ���ֽ� -- 16
//	printf("%d\n", sizeof(a + 0));  // �����������ʾ��Ԫ�ص�ַ��a+0 ������Ԫ�ص�ַ����ַ�Ĵ�С����   -- 4/8
//	printf("%d\n", sizeof(*a));     // ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof(*a)���� --4
//	printf("%d\n", sizeof(a + 1));  // �����������ʾ��Ԫ�ص�ַ��a+1 �ǵڶ���Ԫ�صĵ�ַ����ַ�Ĵ�С����   -- 4/8
//	printf("%d\n", sizeof(a[1]));   // �ڶ���Ԫ�ش�С -- 4
//	printf("%d\n", sizeof(&a));     // &aȡ����������ĵ�ַ����������ĵ�ַҲ�ǵĵ�ַ����ַ�Ĵ�С���� --4/8
//	printf("%d\n", sizeof(*&a));    // &a������ĵ�ַ������ĵ�ַ�����÷��ʵ������飬sizeof�����������Ĵ�С  -- 16
//	printf("%d\n", sizeof(&a + 1)); // &a������ĵ�ַ��&a+1 ��Ȼ��ַ�����������飬�����Ǹ���ַ -- 4/8
//	printf("%d\n", sizeof(&a[0]));  // &a[0]��һ��Ԫ�صĵ�ַ -- 4/8
//	printf("%d\n", sizeof(&a[0] + 1)); // &a[0+1] �ǵڶ���Ԫ�صĵ�ַ -- 4/8
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));      // sizeof�����������Ĵ�С��6*1 = 6�ֽ�
//	printf("%d\n", sizeof(arr + 0));  // arr����Ԫ�ص�ַ,arr+0������Ԫ�ص�ַ --4/8
//	printf("%d\n", sizeof(*arr));     // arr����Ԫ�ص�ַ��*arr������Ԫ�أ���Ԫ�����ַ���С�� 1 ���ֽ�
//	printf("%d\n", sizeof(arr[1]));   // 1
//	printf("%d\n", sizeof(&arr));     // &arr��Ȼ������ĵ�ַ�������ǵ�ַ -- 4/8
//	printf("%d\n", sizeof(&arr + 1)); // &arr+1 ���������������ĵ�ַ����ַ��С�� -- 4/8
//	printf("%d\n", sizeof(&arr[0] + 1));// �ڶ���Ԫ�صĵ�ַ -- 4/8
//
//	printf("%d\n", strlen(arr));      // ���ֵ
//	printf("%d\n", strlen(arr + 0));  // ���ֵ
//	printf("%d\n", strlen(*arr));     // ����
//	printf("%d\n", strlen(arr[1]));   // ����
//	printf("%d\n", strlen(&arr));     // ���ֵ
//	printf("%d\n", strlen(&arr + 1)); // ���ֵ-6
//	printf("%d\n", strlen(&arr[0] + 1));// ���ֵ-1
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
//	printf("%d\n", strlen(&arr));       // 6 &arr  - ����ĵ�ַ -- ����ָ�� char(*)[7] = &arr;
//	printf("%d\n", strlen(&arr + 1));   // ���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));// 5
//
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));          // 4/8 -- ����ָ������Ĵ�С
//	printf("%d\n", sizeof(p + 1));      // 4/8 
//	printf("%d\n", sizeof(*p));         // 1
//	printf("%d\n", sizeof(p[0]));       // 1 int arr[10]; arr[0] == *(arr+0)  p[0] == *(p+0) == 'a'
//	printf("%d\n", sizeof(&p));         // 4
//	printf("%d\n", sizeof(&p + 1));     // 4/8  -- ���������ַ���
//	printf("%d\n", sizeof(&p[0] + 1));  // 4/8
//
//	printf("%d\n", strlen(p));          // 6
//	printf("%d\n", strlen(p + 1));      // 5
//	printf("%d\n", strlen(*p));         // err
//	printf("%d\n", strlen(p[0]));       // err
//	printf("%d\n", strlen(&p));         // ���ֵ  -- &p ����� p �ĵ�ַ������ȡ���λ��ֹͣ
//	printf("%d\n", strlen(&p + 1));     // ���ֵ
//	printf("%d\n", strlen(&p[0] + 1));  // 5
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));           // 48
//	printf("%d\n", sizeof(a[0][0]));     // 4
//	printf("%d\n", sizeof(a[0]));        // 16   -- a[0]�൱�ڵ�һ����Ϊһά�������������sizeof(arr[0])����������������sizeof()�ڣ�������ǵ�һ�еĴ�С
//	printf("%d\n", sizeof(a[0] + 1));    // 4/8   -- a[0] ��ʾ���ǵ�һ�е�����������������ʱ����Ԫ�صĵ�ַ����ʵ���ǵ�һ�е�һ��Ԫ�صĵ�ַ������ a[0]+1 ��ʾ���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1))); // 4
//	printf("%d\n", sizeof(a + 1));       // 4/8   -- a �Ƕ�ά�������������û�� sizeof(a)��Ҳû��&(a)������ a ����Ԫ�ص�ַ�����Ѷ�ά���鿴��һά����ʱ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ�У���Ԫ�أ���ַ��a+1 ���ǵڶ��еĵ�ַ��
//	printf("%d\n", sizeof(*(a + 1)));    // 16    --  �ȼ���sizeof(a[1])�Ĵ�С
//	printf("%d\n", sizeof(&a[0] + 1));   // 4/8   -- �ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));// 16
//	printf("%d\n", sizeof(*a));          // 16  -- a ����Ԫ�ص�ַ -- ��һ�еĵ�ַ��*a���ǵ�һ��,sizeof(*a)���Ǽ����һ�еĴ�С
//	printf("%d\n", sizeof(a[3]));        // 16  -- �ȼ��� sizeof(a[0])��sizeof() �ڲ��ı��ʽ���������㣬ֻ�Ǹ����������ͼ����С��
//	return 0;
//}

   
//���ԡ��㷨�����ݽṹ������ϵͳ������

//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    return 0;
//}

//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
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


//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    return 0;
//}

//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}

////#include <stdio.h>
//int main()
//{
//    char* a[] = { "work","at","alibaba" };
//    char** pa = a;
//    pa++;
//    printf("%s\n", *pa);
//    return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);  // POINT
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 0;
//	printf("������ a �� n ��ֵ��>");
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//
//
//	}
//	printf("�����:%d", sum);
//	return 0;
//}//2 3
//     sum   a
// 1    2    22   
// 2    24   
// 3

//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		// �ж� i �Ƿ�Ϊˮ�ɻ�������������
//		// 1�� ���� i ��λ��
//		int n = 0;
//		int tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			tmp /= 10;
//			n++;
//		}
//		// 2�� ���� i ��ÿһλ��  n �η�֮�� sum 
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		// 3�� �Ƚ� i
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//}

//int main()
//{
//	int line = 7;
//	scanf("%d", &line);
//	// ��ӡ�ϰ벿��
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < line; i++)
//	{
//		// ��ӡ�ո�
//		for (j = 0; j <line-1-i ; j++)
//		{
//			printf(" ");
//		}
//	    // ��ӡ�Ǻ�
//		for (j = 0; j < i*2+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	// ��ӡ�°벿��
//	for (i = 0; i < line-1; i++)
//	{
//		// ��ӡ�ո�
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		// ��ӡ�Ǻ�
//		for (j = 0; j < 2*(line-i-1)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	printf("�������Ǯ��:>");
//	scanf("%d", &money);
//	// ������
//	if (money <= 0)
//	{
//		total = 0;
//	}
//	else if (money == 1)
//	{
//		total = 1;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//	// ����һ
//	//total = money;
//	//empty = total;
//	//while (empty>1)
//	//{
//	//	total += empty / 2;       // 30  35  37  38  39
//	//	empty = empty / 2 + empty % 2;// 10  5   3   2
//	//}
//	printf("���Ժ�%d ƿ��ˮ\n", total);
//	return 0;
//}

void move(int arr[],int sz)
{
	int left = 0;
	int right = sz-1;
	while (left < right)
	{
		// �������ż��
		while ((left < right)&&(arr[left] % 2 == 1))
		{
			left++;
		}
		// ���ұ���ż��
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	move(arr,sz);
	print(arr, sz);
	return 0;
}
