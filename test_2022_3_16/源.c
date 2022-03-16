#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int m = 0;
//    int arr[51] = { 0 };
//    scanf("%d\n", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    scanf("%d\n", &m);
//    for (i = n - 1; i >= 0; i--)
//    {
//        if (arr[i] > m)
//            arr[i + 1] = arr[i];
//        else
//        {
//            arr[i + 1] = m;
//            break;
//        }
//    }
//    if (i < 0)
//        arr[0] = m;
//    for (i = 0; i < n + 1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//    printf("\n%d", printf("Hello world!"));
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    printf("%15d", 0xABCDEF);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int num = 0;
//    float score1 = 0;
//    float score2 = 0;
//    float score3 = 0;
//    scanf("%d;%f,%f,%f", &num, &score1, &score2, &score3);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", num, score1, score2, score3);
//    return 0;
//}

//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//    char c = 0;
//    scanf("%c", &c);
//    if (islower(c) || isupper(c))
//        printf("YES\n");
//    else
//        printf("NO\n");
//    return 0;
//}
//int main()
//{
//    int c = 0;
//    scanf("%c", &c);
//    if (isalpha(c))
//        printf("YES\n");
//    else
//        printf("NO\n");
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int i = 0;
//    char n = 0;
//    scanf("%c", &n);
//    for (i = 0; i < 5; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 5 - i - 1; j++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j <= i; j++)
//        {
//            printf("%c ", n);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//    int arr[12] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < sz; i++)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int date = 0;
//    scanf("%4d%2d%2d", &year, &month, &date);
//    printf("year=%d\n", year);
//    printf("month=%02d\n", month);
//    printf("date=%02d\n", date);
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", 1 << n);
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int tmp = 0;
//    scanf("a=%d,b=%d", &a, &b);
//    tmp = a;
//    a = b;
//    b = tmp;
//    printf("a=%d,b=%d", a, b);
//    return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//    char a = 0;
//    scanf("%c", &a);
//    printf("%d", a);
//    return 0;
//}
//
//int main()
//{
//    int a = 40;
//    int c = 212;
//    printf("%d\n", (-8 + 22) * a - 10 + c / 2);
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d %d", a / b, a % b);
//    return 0;
//}