#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
    int seconds = 0;
    scanf("%d", &seconds);
    int hour = seconds / 3600;
    int minute = seconds / 60 % 60;
    int second = seconds % 60;
    printf("%d %d %d", hour, minute, second);
    return 0;
}

#include<stdio.h>

/*int main()
{
    double score = 0.0;
    double sum = 0.0;
    int i = 0;
    for(i=0;i<3;i++)
    {
        scanf("%lf",&score);
        sum+=score;
    }
    printf("%.2lf %.2lf\n",sum,sum/3);
    return 0;
}*/

int main()
{
    double score[3] = { 0.0 };
    double sum = 0.0;
    double avg = 0.0;

    scanf("%lf %lf %lf\n", &score[0], &score[1], &score[2]);
    sum = score[0] + score[1] + score[2];
    avg = sum / 3;
    printf("%.2lf %.2lf\n", sum, avg);
    return 0;
}

#include<stdio.h>
int main()
{
    int n = 0;
    int h = 0;
    int m = 0;


    while (scanf("%d %d %d\n", &n, &h, &m) != EOF)
    {
        if (m % h != 0)
        {
            printf("%d\n", n - m / h - 1);
        }
        else
            printf("%d\n", n - m / h);
    }


    return 0;
}

#include<stdio.h>

int main()
{
    printf("Name    Age    Gender\n");
    printf("---------------------\n");
    printf("Jack    18     man\n");
    return 0;
}

#include<stdio.h>

int main()
{
    int i = 0;
    int score = 0;
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &score);
        sum += score;
    }
    printf("%.1f", sum / 5.0);
    return 0;
}

#include<stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%0x %0o\n", &a, &b);
    printf("%d\n", a + b);
    return 0;
}

#include<stdio.h>

int main()
{
    float price = 0.0;
    int month = 0;
    int day = 0;
    int flag = 0;
    double cost = 0.0;
    scanf("%f %d %d %d", &price, &month, &day, &flag);
    if (month == day && month == 11)
    {
        cost = price * 0.7 - 50.0 * flag;
    }
    else if (month == day && month == 12)
    {
        cost = price * 0.8 - 50.0 * flag;
    }
    else
    {
        flag = 0;
        cost = price * 1.0 - 50.0 * flag;
    }
    if (cost < 0)
        cost = 0.0;
    printf("%.2lf", cost);
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    scanf("%d ", &n);
    int score[50] = { 0 };
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &score[i]);
    }
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            int tmp = 0;
            if (score[j] < score[j + 1])
            {
                tmp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = tmp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", score[i]);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int A = 0;
    int B = 0;
    int i = 0;
    char arr[50] = { 0 };
    gets(arr);
    while (arr[i])
    {
        if (arr[i] == 'A')
            A++;
        if (arr[i] == 'B')
            B++;
        i++;
    }
    if (A > B)
        printf("A\n");
    else if (A < B)
        printf("B\n");
    else
        printf("E\n");
    return 0;
}