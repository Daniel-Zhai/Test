#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int a[40] = { 0 };
//    scanf("%d", &n);
//    while (n)
//    {
//        a[i] = n % 6;
//        n /= 6;
//        i++;
//    }
//    for (i--; i >= 0; i--)
//    {
//        printf("%d", a[i]);
//    }
//    return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    long long int sum = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        sum += i;
//    }
//    printf("%lld\n", sum);
//    return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//    int h = 0;
//    int m = 0;
//    int minute = 0;
//    scanf("%d:%d %d", &h, &m, &minute);
//    h = (h + minute / 60 + (m + minute % 60) / 60) % 24;
//    m = (m + minute % 60) % 60;
//    printf("%02d:%02d", h, m);
//    return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//    int h = 0;
//    int m = 0;
//    int minute = 0;
//    scanf("%d:%d %d", &h, &m, &minute);
//    h = (h + (m + minute) / 60) % 24;
//    m = (m + minute) % 60;
//    printf("%02d:%02d", h, m);
//    return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", n / 12 * 4 + 2);
//    return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//    long long int n = 0;
//    long long int m = 0;
//    long long int max = 0;
//    long long int min = 0;
//    long long int tmp = 0;
//    scanf("%d %d", &n, &m);
//    if (n < m)
//    {
//        tmp = n;
//        n = m;
//        m = tmp;
//    }
//    max = n;
//    min = m;
//    while (tmp = max % min)
//    {
//        max = min;
//        min = tmp;
//    }
//
//    printf("%lld", min + m * n / min);
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int a[10] = { 0 };
//    scanf("%d", &n);
//    int tmp = 0;
//    while (n)
//    {
//        tmp = n % 10;
//        if (tmp % 2 == 0)
//        {
//            a[i++] = 0;
//        }
//        else if (tmp % 2 == 1)
//        {
//            a[i++] = 1;
//        }
//        n /= 10;
//        
//    }
//    for (i--; i >= 0; i--)
//    {
//        printf("%d", a[i]);
//    }
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int a[10] = { 0 };
//    int j = 0;
//    scanf("%d", &n);
//    int tmp = 0;
//    while (n)
//    {
//        tmp = n % 10;
//        if (tmp % 2 == 0)
//        {
//            a[i++] = 0;
//        }
//        else if (tmp % 2 == 1)
//        {
//            a[i++] = 1;
//        }
//        n /= 10;
//    }
//    for (i--; i >= 0; i--)
//    {
//        if (a[i] != 0)
//            break;
//    }
//    for (i; i >= 0; i--)
//        printf("%d", a[i]);
//    return 0;
//}
//#include<math.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int a = 0;
//    int ret = 0;
//    scanf("%d", &n);
//    int tmp = 0;
//    while (n)
//    {
//        tmp = n % 10;
//        if (tmp % 2 == 0)
//        {
//            a = 0;
//        }
//        else if (tmp % 2 == 1)
//        {
//            a = 1;
//        }
//        ret += a * pow(10, i);
//        n /= 10;
//        i++;
//    }
//    printf("%d", ret);
//    return 0;
//}


#include<stdio.h>

int Fib(int n)
{
    if (n <= 2)
        return n;
    else
        return Fib(n - 1) + Fib(n - 2);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", Fib(n));
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    int i = 0;
    int a = 0;
    int arr[100001] = { 0 };
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        arr[a] = a;
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            printf("%d ", arr[i]);
    }
}

#include<stdio.h>

int main()
{
    char s[8000] = { 0 };
    scanf("%s", &s);
    long long int c = 0;
    long long int ch = 0;
    long long int chn = 0;
    char* p = s;
    while (*p)
    {
        if (*p == 'C')
            c++;
        else if (*p == 'H')
            ch += c;
        else if (*p == 'N')
            chn += ch;
        p++;
    }
    printf("%lld", chn);
    return 0;
}

#include<stdio.h>

int main()
{
    int arr[4] = { 0 };
    int i = 0;
    int max = 0;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 0; i < 4; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("%d", max);
    return 0;
}

#include<stdio.h>

int main()
{
    int score = 0;
    scanf("%d", &score);
    if (score >= 90 && score <= 100)
        printf("A\n");
    else if (score >= 80 && score <= 89)
        printf("B\n");
    else if (score >= 70 && score <= 79)
        printf("C\n");
    else if (score >= 60 && score <= 69)
        printf("D\n");
    else if (score <= 59 && score >= 0)
        printf("E\n");
    else
        printf("F\n");
    return 0;
}

#include<stdio.h>

int max3(int a, int b, int c)
{
    int max = a > b ? a : b;
    max = max > c ? max : c;
    return max;
}
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    printf("%.2f", (float)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c)));
    return 0;
}