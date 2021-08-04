#define _CRT_SECURE_NO_WARNINGS 1
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
//		// ¼ÆËãn Î»Êý
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

#include <stdio.h>
int main()
{

	return 0;
}