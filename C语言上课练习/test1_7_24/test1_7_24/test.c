#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// ����һ���ṹ������
// struct -- �ṹ��ؼ���  Stu -- �ṹ���ǩ  struct Stu -- �ṹ������
//struct Stu
//{
//	// ��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};

// �������д��  --- �����ٵ�ʹ��ȫ�ֱ���
//struct Stu1
//{
//	// ��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;// s1,s2,s3 ������ ȫ�� �Ľṹ�����

//// ������ṹ�����������ֽ�Stu
//typedef struct Stu
//{
//	// ��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	// �����ṹ�����
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
//	// ��Ա����
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
//	Stu s = { "����",40,"15524312421","��" };
//	// ��ӡ�ṹ������
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
//		printf("������\n");
//	else
//		printf("��������\n");
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
//	printf("����λ��");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//
//			printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ��");
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
//    //// ����һ��ֻ�ܽ����ֵ��С�����⣩
//    //printf("����ǰ��a=%d,b=%d\n", a, b);
//    //// ���������
//    //// INT_MAX; 2147483647
//    //// int - 4���ֽ� - 32bitλ - ���ֵ
//    //a = a + b;
//    //b = a - b;
//    //a = a - b;
//    //printf("������a=%d,b=%d\n", a, b);
//
//
//    // ������ (��������������)
//    printf("����ǰ��a=%d,b=%d\n", a, b);
//    // ���������ƣ�λ��� --- ��ͬΪ0������Ϊ1
//    a = a ^ b; // 011 ^ 101 = 110
//    b = a ^ b; // 110 ^ 101 = 011 = 3
//    a = a ^ b; // 110 ^ 011 = 101
//    printf("������a=%d,b=%d\n", a, b);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,7,1,2,3,4 };
//	// ����һ
//	// �������
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]); // ���������е�Ԫ�ظ���
//	//for (i = 0; i < sz; i++)
//	//{
//	//	 // ͳ��arr[i]��arr�����г��ֵĴ���
//	//	 int count = 0;
//	//	 int j = 0;
//	//	 for (j = 0; j < sz; j++)
//	//	 {
//	//		if (arr[i] == arr[j])
//	//			count++;
//	//	 }
//	//	 if (count == 1)
//	//	 {
//	//		printf("�ҳ�:%d\n", arr[i]);
//	//		break;
//	//	 }
//	//}
//	
//
//	// ������
//	// 3 ^ 3 = 0 011 011 000
//	// 5 ^ 5 = 0 101 101 000
//	// a ^ a = 0
//	// 0 ^ 5 = 5 000 101 101
//	// 0 ^ a = a
//	//
//	// 3 ^ 5 ^ 3 = 5 011 101 110 011 101
//	// 3 ^ 3 ^ 5 = 5 011 011 000 101 101
//	// ��� ���㽻����
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
//	char input[20] = { 0 }; // �洢����
//	// �ػ�
//	// system() -- ר������ִ��ϵͳ����
//	system("shutdown -s -t 60"); // �ػ�
//again:
//	printf("���Խ���1���Ӻ�ػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input); // %s -- �ַ�����
//	if (strcmp(input, "����") == 0) // �ж�input�зŵ��ǲ���"������" -- strcmp  - string compare
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
//	int a = 0; // 4���ֽ� ��32��bit λ
//	// ~ ����2���ƣ�λȡ��
//	// 00000000000000000000000000000000
//	// ��λȡ��
//	// 11111111111111111111111111111111 (��һλ�ϵ�1��ʾ������
//	// ԭ�롢���롢����
//	// ԭ�����λ���䣬����λ��λȡ���õ����룬�����һ�õ�����
//	// ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//	// ���� -- ԭ�롢���롢���� ��ͬ
//	// ������
//	// ԭ�� ����> ���� ����> ����
//	// ֱ�Ӱ������� ԭ��ķ���λ���� ���� + 1
//	// д���Ķ��������� ����λ��λȡ���õ�
//	// 11111111111111111111111111111111
//	// 11111111111111111111111111111110
//	// 10000000000000000000000000000001
//	int b = ~a; // b���з��ŵ�����
//	printf("%d", b); // ��ӡ�����������ԭ�� -- -1
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//struct Book
//{
//	char name[20]; // C���Գ������
//	short price; // 55
//};
//int main()
//{
//	// ���ýṹ������ ����һ�������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������",55 };
//	struct Book* pb = &b1;
//	// . �ṹ�����.��Ա
//	// -> �ṹ��ָ��->��Ա
//	printf("������%s\n", b1.name);
//	printf("�۸�%dԪ\n", b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
//	strcpy(b1.name, "������");
//	printf("�޸ĺ��������%s\n", b1.name);
//	// ����pb��ӡ���ҵ������ͼ۸�
//	printf("%s\n", (*pb).name);
//	printf("%s\n", pb->name);
//	printf("�۸�%dԪ", pb->price);
//	return 0;
//}
