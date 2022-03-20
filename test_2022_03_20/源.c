#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//    int weight = 0;
//    int height = 0;
//    while (~scanf("%d %d", &weight, &height))
//    {
//        float bmi = weight / (height * height / 10000.0);
//        if (bmi < 18.5)
//            printf("Underweight\n");
//        if (bmi >= 18.5 && bmi <= 23.9)
//            printf("Normal\n");
//        if (bmi > 23.9 && bmi <= 27.9)
//            printf("Overweight\n");
//        if (bmi > 27.9)
//            printf("Obese\n");
//    }
//    return 0;
//}
//
//int main()
//{
//    char arr[] = "+-*/";
//    int i = 0;
//    double a = 0.0;
//    double b = 0.0;
//    char ch = 0;
//    scanf("%lf%c%lf", &a, &ch, &b);
//    for (i = 0; i < 4; i++)
//    {
//        if (ch == arr[i])
//        {
//            if (ch == '+')
//            {
//                printf("%.4lf+%.4lf=%.4lf", a, b, a + b);
//                return 0;
//            }
//            if (ch == '-')
//            {
//                printf("%.4lf-%.4lf=%.4lf", a, b, a - b);
//                return 0;
//            }
//            if (ch == '*')
//            {
//                printf("%.4lf*%.4lf=%.4lf", a, b, a * b);
//                return 0;
//            }
//            if (ch == '/')
//            {
//                if (b == 0)
//                {
//                    printf("Wrong!Division by zero!\n");
//                    return 0;
//                }
//                else
//                {
//                    printf("%.4lf/%.4lf=%.4lf", a, b, a / b);
//                    return 0;
//                }
//            }
//        }
//    }
//    if (i == 4)
//        printf("Invalid operation!\n");
//    return 0;
//}

#include<stdio.h>

//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//            printf("*");
//        printf("\n");
//    }
//    return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//    int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    int year = 0;
//    int month = 0;
//    while (~scanf("%d %d", &year, &month))
//    {
//        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//            arr[1] = 29;
//        else
//            arr[1] = 28;
//        printf("%d\n", arr[month - 1]);
//    }
//    return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}

int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
    float a = 0;
    float b = 0;
    float c = 0;
    while (~scanf("%f %f %f", &a, &b, &c))
    {
        if (a != 0)
        {
            float delta = b * b - 4 * a * c;
            if (delta == 0)
            {
                if (b == 0)
                    printf("x1=x2=0.00\n");
                else
                    printf("x1=x2=%.2f\n", (-b + sqrt(delta)) / (2 * a));
            }
            else if (delta > 0)
            {
                printf("x1=%.2f;x2=%.2f\n", (-b - sqrt(delta)) / (2 * a), (-b + sqrt(delta)) / (2 * a));
            }
            else
                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi", -b / (2 * a), sqrt(-delta) / (2 * a), -b / (2 * a), sqrt(-delta) / (2 * a));
        }
        else
            printf("Not quadratic equation\n");
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - i - 1; j++)
                printf("  ");
            for (j = 0; j <= i; j++)
                printf("* ");
            printf("\n");
        }
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - i - 1; j++)
                printf(" ");
            for (j = 0; j <= i; j++)
                printf("* ");
            printf("\n");
        }
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < i; j++)
                printf(" ");
            for (j = 0; j < n - i; j++)
                printf("* ");
            printf("\n");
        }
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - i; j++)
                printf(" ");
            for (j = 0; j <= i; j++)
                printf("* ");
            printf("\n");
        }
        for (i = 0; i <= n; i++)
        {
            for (j = 0; j < i; j++)
                printf(" ");
            for (j = 0; j <= n - i; j++)
                printf("* ");
            printf("\n");
        }
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j <= n - i; j++)
                printf("* ");
            printf("\n");
        }
        for (i = 0; i <= n; i++)
        {
            for (j = 0; j <= i; j++)
                printf("* ");
            printf("\n");
        }
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - i; j++)
                printf("  ");
            for (j = 0; j <= i; j++)
                printf("*");
            printf("\n");
        }
        for (i = 0; i <= n; i++)
        {
            for (j = 0; j < i; j++)
                printf("  ");
            for (j = 0; j <= n - i; j++)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == j)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i + j == n - 1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == j || i + j == n - 1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == j || j == 0 || i == n - 1)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
    }
    return 0;
}