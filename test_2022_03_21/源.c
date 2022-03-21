#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
/*
int main()
{
	int i = 0;
	float h = 0.0;
	float sum = 0.0;
	for (i = 0; i < 5; i++)
	{
		scanf("%f\n", &h);
		sum += h;
	}
	printf("%.2f\n", sum/5.0);
	return 0;
}*/

//int main()
//{
//	int i = 0;
//	float h[5] = { 0.0 };
//	float sum = 0.0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%f\n", &h[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		sum += h[i];
//	}
//	printf("%.2f\n", sum / 5.0);
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		switch (n)
//		{
//		case 200:printf("OK\n"); break;
//		case 202:printf("Accepted\n"); break;
//		case 400:printf("Bad Request\n"); break;
//		case 403:printf("Forbidden\n"); break;
//		case 404:printf("Not Found\n"); break;
//		case 500:printf("Internal Server Error\n"); break;
//		case 502:printf("Bad Gateway\n"); break;
//		}
//	}
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j <= i; j++)
//			{
//				printf("%d ", j + 1);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int score[7] = { 0 };
//	int i = 0;
//	while (~scanf("%d %d %d %d %d %d %d ", &score[0],
//		&score[1], &score[2], &score[3],
//		&score[4], &score[5], &score[6]))
//	{
//		int sum = 0;
//		int max = 0;
//		int min = 100;
//		for (i = 0; i < 7; i++)
//		{
//			sum += score[i];
//			if (score[i] > max)
//				max = score[i];
//			if (score[i] < min)
//				min = score[i];
//		}
//		printf("%.2f\n", (sum - max - min) / 5.0);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int m = 0;
//	int arr[51] = { 0 };
//	scanf("%d\n", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	scanf("%d\n", &m);
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (arr[i] > m)
//			arr[i + 1] = arr[i];
//		else
//		{
//			arr[i + 1] = m;
//			break;
//		}
//	}
//	if (i < 0)
//		arr[0] = m;
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	while (~scanf("%d ", &n))
//	{
//		int arr[101] = { 0 };
//		for (i = 0; i <= n; i++)
//		{
//			arr[i] = i;
//		}
//		for (i = 2; i <= n; i++)
//		{
//			int j = 0;
//			for (j = i + 1; j <= n; j++)
//			{
//				if (arr[j] % i == 0)
//					arr[j] = 0;
//			}
//		}
//		int count = 0;
//		for (i = 2; i <= n; i++)
//		{
//			if (arr[i] != 0)
//			{
//				printf("%d ", arr[i]);
//			}
//			else
//				count++;
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
//}

//#include<stdio.h>

#include<stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    int i = 0;
    int j = 0;
    int arr1[100][100] = { 0 };
    int arr2[100][100] = { 0 };
    int count = 0;
    int sum = 0;
    scanf("%d %d", &m, &n);
    sum = m * n;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr1[i][j] == arr2[i][j])
                count++;
        }
    }
    printf("%.2f", 100.0 * count / sum);
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char name[20] = { 0 };
    char password[20] = { 0 };
    while (~scanf("%s %s", name, password))
    {
        if (strcmp(name, password) == 0 && strcmp(password, "admin") == 0)
            printf("Login Success!\n");
        else
            printf("Login Fail!\n");
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int i = 0;
    int count = 0;
    for (i = 1; i <= 2019; i++)
    {
        int tmp = i;
        while (tmp)
        {
            if (tmp % 10 == 9)
            {
                count++;
                break;
            }
            tmp /= 10;
        }
    }
    printf("%d\n", count);
    return 0;
}
#include<stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("%d %d\n", n / 2, n / 2);
    else
        printf("%d %d\n", n / 2 + 1, n / 2);
    return 0;
}