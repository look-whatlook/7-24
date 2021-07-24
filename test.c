#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int Add(int x,int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	int c = Add(a, b);
//	printf("c = %d\n", c);
//
//	return 0;
//}


//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//
//	//д־ļ
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", 
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//		//fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", 
//		//	__FILE__, __LINE__, __DATE__, __TIME__, i);
//			
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#define PRINT(X) printf("the value of " #X " is %d\n", X)
//
//int main()                 //  #X == “X”
//{
//	//printf("hello world\n");
//	//printf("hello " "world\n");
//	//printf("hel" "lo " "world\n");
//
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of ""a"" is %d\n", a);
//	PRINT(b);
//	//printf("the calue of ""b"" is %d\n", b);
//	return 0;
//}

//#define CAT(X,Y) X##Y
//int main()
//{
//	int Class84 = 2019;
//	printf("%d\n", Class84);
//	printf("%d\n", CAT(Class, 84));
//	//printf("%d\n", Class##84);//##连接成一个符号串
//	printf("%d\n", Class84); //三个等价
//	return 0;
//
//}

//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	//int* p = MALLOC(10, int);
//	free(p);
//	p = NULL;
//	return 0;
//}

//#define DEBUG
//int main()
//{
//	int arr[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//int main()
//{
//#if 2==2
//	printf("haha\n");
//#elif 2 == 1
//	printf("hehe\n");
//#else
//	printf("嘿嘿\n");
//#endif
//	return 0;
//}

//#define DEBUG 0
//int main()
//{
//#if defined(DEBUG)
//	printf("hehe\n");
//#endif
//#ifdef DEBUG
//	printf("hehe\n");
//#endif
//#if !defined(DEBUG)
//	printf("hehe\n");
//#endif
//#ifndef DEBUG
//	printf("hehe\n");
//#endif
//	return 0;
//}

//#include <stddef.h>
struct S
{
	char c1;
	int a;
	char c2;
};
#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
int main()
{
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, c2));
}

int main()
{
	int* p = (int*)malloc(0);

	return 0;
}
//
//#include<stdio.h>
//int main()
//{
//	union
//	{
//		short k;
//		char i[2];
//	}*s, a;
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	printf("%x\n", a.k);
//	return 0;
//}



//
//
//#include <stdio.h>
//union Un
//{
//	short s[7];
//	int n;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}

//
//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstPimData->ucPim1 = 2;
//	pstPimData->ucData0 = 3;
//	pstPimData->ucData1 = 4;
//	pstPimData->ucData2 = 5;
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	return 0;
//}