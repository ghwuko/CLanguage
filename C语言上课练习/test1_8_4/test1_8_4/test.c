#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);

	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return ret;

}
int main()
{
	char arr1[] = "xxxxxxxxxxxxxx";
	char arr2[] = "bit";

	printf("%s\n", my_strcpy(arr1, arr2));
}
//unsigned int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str++)
//		count++;
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("�ַ�����Ϊ��%u\n", my_strlen(arr));
//	return 0;
//}
//int fei1(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fei1(n - 1) + fei1(n - 2);
//}
//int fei2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("�ݹ�ʵ�֣�%d\n", fei1(n));
//	printf("�ǵݹ�ʵ�֣�%d\n", fei2(n));
//
//	return 0;
//}
//int pow(int n, int k)
//{
//	if (k >= 1)
//		return n * pow(n, k - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%d��%d�η�Ϊ��%d\n", n, k, pow(n, k));
//	return 0;
//}
//int DigitSum(int n)
//{
//	if (n > 9)
//		return n % 10 + DigitSum(n / 10);
//	else
//		return n;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", DigitSum(n));
//	return 0;
//}
//int my_strlen1(char* str)
//{
//	if (*str)
//		return 1 + my_strlen1(str + 1);
//	else 
//		return 0;
//}
//
//int my_strlen2(char* str)
//{
//	int count = 0;
//	while (*str++)
//		count++;
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("�ݹ�ʵ��strlen��%d\n", my_strlen1(arr));
//	printf("�ǵݹ�ʵ��strlen��%d\n", my_strlen2(arr));
//
//	return 0;
//}


//
//int Fac1(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac1(n - 1);
//}
//
//int Fac2(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("�ݹ鷽ʽ��%d�Ľ׳�:%d\n", n, Fac1(n));
//	printf("�ǵݹ鷽ʽ��%d�Ľ׳�:%d\n", n, Fac2(n));
//
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}


//#include <stdio.h>
//#include <assert.h>
//int my_strlen(const char* p)
//{
//	assert(p != NULL);
//	int count = 0;
//	while (*p)
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int ch1 = getchar();
//    while (ch1 != 15)
//    {
//        int ch2 = getchar();
//        if (ch1 != 'a' && ch1 != 'A' && ch1 != 'E' && ch1 != 'e' && ch1 != 'i' && ch1 != 'I' && ch1 != 'o' && ch1 != 'O' && ch1 != 'u' && ch1 != 'U')
//        {
//            printf("Vowel\n");
//        }
//        else
//        {
//            printf("Consonant\n");
//        }
//    }
//    return 0;
//}



//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		// ����n λ��
//		int n = 0;
//		int j = i;
//		int x = 0;
//		int sum = 0;
//		while (j)
//		{
//			j /= 10;
//			n++;
//		}
//
//		j = i;
//		for (x = 0; x < n; x++)
//		{
//
//			sum += pow(j % 10, n);
//			j /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//		
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int i = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d", &a);
//	for (i = 0; i < 5; i++)
//	{
//		
//		b = b * 10 + a;
//		sum += b;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p++);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
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

//#include <stdio.h>
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num); // 1234
//	print(num);
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL); // ����
//	assert(src != NULL);  // ����
//
//	// �� src ָ����ַ��������� dest ָ��Ŀռ䣬���� '\0'�ַ�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	// strcpy
//	// �ַ�������
//	// 1
//	//char arr1[] = "###################";
//	//char arr2[] = "bit";
//
//	// 2  -- ����д��  -- arr2û��'\0'��ѭ������ֹͣ
//	// 	   Դ�ַ�����һ��Ҫ��\0
//	//char arr1[] = "###################";
//	//char arr2[] = { 'a','b','c' };
//
//	// 3   -- Ŀ��ռ�����㹻��
//	//char arr1[3] = { 0 };
//	//char arr2[] = "abcdef";
//
//	// 4  -- Ŀ��ռ������޸�
//	char* arr1 = "xxxxxxxxx"; // �����ַ������Ƿ��ڳ������ģ��ǲ����޸ĵ�
//	// const char* arr1 = "xxxxxxxxx"; //�Ͻ���д��
//	char arr2[] = "abcdef";
//	
//	// ��ʽ����
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

