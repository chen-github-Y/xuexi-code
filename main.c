#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int Input = 0;
	printf("加入比特（1/0）>:");
	scanf("%d", &Input);
	if (Input == 1)
		printf("nbi");
	else
		printf("...");
	return 0;

}

//int main()
//{
//	int sum1 = 0;
//	int sum2 = 0;
//	scanf("%d%d", &sum1, &sum2);
//	int sum = 0;
//	sum=sum1 + sum2;
//	printf("%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";      //  \0是字符串结束标志
//	char arr2[] = { 'a','b','c' ,/*'\0'*/ };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr2));
//	return 0;
//
//}