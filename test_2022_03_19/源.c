#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
    int num = 0;
    while (~scanf("%d", &num))
    {
        if (num >= 140)
            printf("Genius\n");
    }

    return 0;
}

#include<stdio.h>

int main()
{
    int score = 0;
    while (~scanf("%d", &score))
    {
        if (score >= 90)
            printf("Perfect\n");
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int score = 0;
    while (~scanf("%d", &score))
    {
        if (score >= 60)
            printf("Pass\n");
        else
            printf("Fail\n");
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        if (n % 2 == 1)
            printf("Odd\n");
        else
            printf("Even\n");
    }
    return 0;
}

int main()
{
    int arr[3] = { 0 };
    int max = 0;
    int i = 0;
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    for (i = 0; i < 3; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("%d\n", max);
    return 0;
}

#include<stdio.h>

int main()
{
    char n = 0;
    int i = 0;
    char arr[10] = "AEIOUaeiou";
    while (~scanf("%c", &n))
    {
        for (i = 0; i < 10; i++)
        {
            if (n == arr[i])
            {
                printf("Vowel\n");
                break;
            }
        }
        if (i == 10)
            printf("Consonant\n");
        getchar();
    }
    return 0;
}

#include<stdio.h>

int main()
{
    char n = 0;
    while (~scanf(" %c", &n))
    {
        if (isalpha(n))
            printf("%c is an alphabet.\n", n);
        else
            printf("%c is not an alphabet.\n", n);
    }
    return 0;
}

#include<stdio.h>
#include<ctype.h>
int main()
{
    char n = 0;
    while (~scanf("%c", &n))
    {
        if (isalpha(n))
        {
            if (isupper(n))
                printf("%c\n", tolower(n));
            if (islower(n))
                printf("%c\n", toupper(n));
        }
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int t = 0;
    while (~scanf("%d", &t))
    {
        if (t > 0)
            printf("1\n");
        else if (t == 0)
            printf("0.5\n");
        else
            printf("0\n");
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int i = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    while (~scanf("%d %d %d", &a, &b, &c))
    {
        if (a + b > c && a + c > b && b + c > a)
        {
            if (a == b && a == c)
                printf("Equilateral triangle!\n");
            else if ((a == b && a != c) || (a == c && a != b) || (b == c && a != b))
                printf("Isosceles triangle!\n");
            else
                printf("Ordinary triangle!\n");
        }
        else
            printf("Not a triangle!\n");
    }
    return 0;
}