#define _CRT_SECURE_NO_WARNINGS 1

//����һ������������������

#include <stdio.h>

int main() 
{
	int arr[40] = { 0 };
	int n = 0;
	scanf("%d", &n);

	int i = 0;
	while (n)
	{
		arr[i] = n % 6;
		n = n / 6;
		i++;

	}

	for (i -= 1; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
	return 0;


}



