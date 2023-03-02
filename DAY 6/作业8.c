 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int Judge(char* arr3, char* arr4,int n)
{
	int i = 0;
	int j = 0;
	char arr5[5] = {0};
	for (j = 0; j < n; j++)
	{
		int m = 0;
		for (i = j; i < n ; i++)
		{
			
			arr5[m] = arr4[i];
			m++;
		}
		int z = 5 - j;
		for (i = 0; i < j; i++)
		{
			
			arr5[z] = arr4[i];
			z++;
		}
		//arr5[n + 1] = '\0';
		if (strcmp(arr5, arr3) == 0)
			return 1;
	}
	/*for (j = n-1; j > 0; j--)
	{
		for (i = j; i > 0; i--)
		{
			int m = 0;
			arr5[m] = arr4[i];
			m++;
		}
		for (i = 0; i < j; i++)
		{
			int z = 5 - j;
			arr4[z] = arr4[i];
			z++;
		}
		if (strcmp(arr4, arr3) == 0)
			return 1;
	}*/

	return 0;
}

int main()
{
	int i = 0;
	int n = 0;
	char arr1;
	char arr2;
	//printf("请输入两组字符串长度：");
	scanf("%d", &n);
	printf("请输入第一个数组内容：");
	
	scanf("%s", &arr1);
	printf("请输入第二个数组内容：");
	scanf("%s", &arr2);
	int l = strlen(&arr1);
	int* pa1 = &arr1;
	int* pa2 = &arr2;
	if (Judge(pa1, pa2, l))
		printf("这是字符串旋转的结果");
	else
		printf("这不是字符串旋转的结果");
	return 0;
}