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
//	int(*p)[10] = &arr; // ȡ������ĵ�ַ
//
//	int (*pf)(int, int); // ����ָ��
//	int (*pfArr[4])(int, int); // pfArr ��һ������ - ����ָ�������
//	// ppfArr ��һ��ָ�� ������ָ�����顿 ��ָ��
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//	// ppfArr ��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	// ָ��������ÿ��Ԫ�ص�������һ������ָ��   int(*)(int, int)
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
// qsort ������ʹ���ߵ�ʵ��һ���ȽϺ���
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
//	// ����
//	for (i = 0; i < sz - 1; i++)
//	{
//		// һ��ð������
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
//	// �Ƚ���������ֵ��
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
//	// �Ƚ���������ֵ��
//	if ((*(float*)e1 == *(float*)e2))
//		return 0;
//	else if ((*(float*)e1 > *(float*)e2))
//		return 1;
//	else
//		return -1;
//	//return (int)(*(float*)e1 - *(float*)e2);  -- ��������
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
//	// �ַ����Ƚϲ���ֱ���� ><= ���Ƚϣ�Ӧ����strcmp ������
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
	// ��һ������ �� �������������Ԫ�ص�ַ
	// �ڶ������� �� �����������Ԫ�ظ���
	// ���������� �� �����������ÿ��Ԫ�صĴ�С -- ��λ���ֽ�
	// ���ĸ����� �� �Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ -- �������ʹ�����Լ�ʵ�� ��
	//				����ָ������������� �� ���Ƚϵ�����Ԫ�صĵ�ַ

// ʵ�� bubble_sort �����ĳ���Ա�����Ƿ�ֱ��δ��������������� -- ��֪��
// �ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����

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
//	// ����
//	for (i = 0; i < sz - 1; i++)
//	{
//		// ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			// ����Ԫ�صıȽ�
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
//			{
//				// ����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
//void test4()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// ʹ�� bubble_sort �ĳ���Աһ��ָ���Լ��������ʲô����
//	// ����Ӧ��ֱ����αȽϴ����������е�Ԫ��
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
//	// char* pc = &a;  // --- �ᱨ����
//
//	//char ch = 'w';
//	void* p = &a; //  -- ���ᱨ����
//	
//	// *p = 0;  //  -- ����
//	// p++;     //  -- ����
//	//p = &ch;
//	// void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
//	// void* ���͵�ָ�� ���ܽ��н����ò�����Ҳ���ܽ��� +- �����Ĳ���
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_int(const void* e1, const void* e2)
//{
//	// �Ƚ���������ֵ��
//	return (*(int*)e1 - *(int*)e2);
//}
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	// �ַ����Ƚϲ���ֱ���� ><= ���Ƚϣ�Ӧ����strcmp ������
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
//	// ��һ������ �� �������������Ԫ�ص�ַ
//	// �ڶ������� �� �����������Ԫ�ظ���
//	// ���������� �� �����������ÿ��Ԫ�صĴ�С -- ��λ���ֽ�
//	// ���ĸ����� �� �Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ -- �������ʹ�����Լ�ʵ�� ��
//	//				����ָ������������� �� ���Ƚϵ�����Ԫ�صĵ�ַ
//
//// ʵ�� bubble_sort �����ĳ���Ա�����Ƿ�ֱ��δ��������������� -- ��֪��
//// �ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����
//
//
//void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	// ����
//	for (i = 0; i < sz - 1; i++)
//	{
//		// ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			// ����Ԫ�صıȽ�
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				// ����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//void test4()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// ʹ�� bubble_sort �ĳ���Աһ��ָ���Լ��������ʲô����
//	// ����Ӧ��ֱ����αȽϴ����������е�Ԫ��
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
//	// ��ǰ��д�� -- �о�����  -- ֻ�ܱȽϵ�һ���͵�����
//	//bubble_sort(arr, sz);
//	//bubble_sort(f, sz);
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
//	return 0;
//}