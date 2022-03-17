/*#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
    int weight = 0;
    int height = 0;
    float bmi = 0;
    scanf("%d %d", &weight, &height);
    bmi = weight / (height * height / 10000.0);
    printf("%.2f", bmi);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    float p = 0;
    scanf("%d %d %d\n", &a, &b, &c);
    p = (a + b + c) / 2.0;
    printf("circumference=%.2f area=%.2f\n", a + b + c * 1.00, sqrt(p * (p - a) * (p - b) * (p - c)) * 1.00);
    return 0;
}

#include<stdio.h>

int main()
{
    float r = 0.0;
    double pi = 3.1415926;
    scanf("%f", &r);
    printf("%.3f\n", (4 / 3.0) * pi * r * r * r);
    return 0;
}

#include<stdio.h>

int main()
{
    int score1 = 0;
    int score2 = 0;
    int score3 = 0;
    scanf("%d %d %d\n", &score1, &score2, &score3);
    printf("score1=%d,score2=%d,score3=%d\n", score1, score2, score3);
    return 0;
}

#include<stdio.h>

int main()
{
    int i = 0;
    int sum = 0;
    for (i = 10000; i <= 99999; i++)
    {
        int j = 0;
        int tmp = i;
        int sum = 0;
        for (j = 10; j <= 10000; j *= 10)
        {
            sum += (tmp % j) * (tmp / j);
        }
        if (sum == i)
            printf("%d ", i);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d\n", &a, &b);
    printf("%d\n", ((a % 100) + (b % 100)) % 100);
    return 0;
}*/