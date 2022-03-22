#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    float max = 0.0;
//    float min = 100.0;
//    float sum = 0.0;
//    float avg = 0.0;
//    float arr[100] = { 0.0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%f", &arr[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (max < arr[i])
//            max = arr[i];
//        if (min > arr[i])
//            min = arr[i];
//        sum += arr[i];
//    }
//    avg = sum / n;
//    printf("%.2f %.2f %.2f", max, min, avg);
//    return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//    char name[20] = { 0 };
//    char password[20] = { 0 };
//    scanf("%s %s", name, password);
//    if (strcmp(name, password) == 0)
//        printf("same\n");
//    else
//        printf("different\n");
//    return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int i = 0;
//    int j = 0;
//    int arr[10][10] = { 0 };
//    int sum = 0;
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > 0)
//                sum += arr[i][j];
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//    int arr[10] = { 0 };
//    int i = 0;
//    int tmp = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < 5; i++)
//    {
//        tmp = arr[i];
//        arr[i] = arr[9 - i];
//        arr[9 - i] = tmp;
//    }
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int pos = 0;
//    int neg = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d ", &n);
//        if (n > 0)
//            pos++;
//        if (n < 0)
//            neg++;
//    }
//    printf("positive:%d\nnegative:%d", pos, neg);
//    return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int num = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &num);
//        sum += num;
//    }
//    printf("%d", sum);
//    return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int max = 0;
//    int min = 100;
//    int score[10000] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &score[i]);
//        if (score[i] > max)
//            max = score[i];
//        if (score[i] < min)
//            min = score[i];
//    }
//    printf("%d", max - min);
//    return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int flag1 = 0;
//    int flag2 = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (i > 0)
//        {
//            if (arr[i] > arr[i - 1])
//                flag1 = 1;
//            else if (arr[i] < arr[i - 1])
//                flag2 = 1;
//        }
//    }
//    if (flag1 + flag2 > 1)
//        printf("unsorted\n");
//    else
//        printf("sorted\n");
//    return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    int i = 0;
//    int j = 0;
//    int del = 0;
//    scanf("%d ", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &del);
//    for (i = 0; i < n; i++)
//    {
//        if (del != arr[i])
//            arr[j++] = arr[i];
//    }
//    for (i = 0; i < j; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int arr[1000] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = i + 1; j < n; j++)
//        {
//            if (arr[j] == arr[i])
//            {
//                int k = 0;
//                for (k = j; k < n; k++)
//                {
//                    arr[k] = arr[k + 1];
//                }
//                n--;
//                j--;
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}

#include<stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    int arr1[1000] = { 0 };
    int arr2[1000] = { 0 };
    int arr3[2000] = { 0 };
    int i = 0;
    int j = 0;
    int k = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d ", &arr1[i]);
    for (j = 0; j < m; j++)
        scanf("%d ", &arr2[j]);
    i = 0; j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] > arr2[j])
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
    }
    if (i == n)
    {
        for (; j < m; j++)
        {
            arr3[k] = arr2[j];
            k++;
        }
    }
    else
    {
        for (; i < n; i++)
        {
            arr3[k] = arr1[i];
            k++;
        }
    }
    for (i = 0; i < n + m; i++)
        printf("%d ", arr3[i]);
    return 0;
}

#include <stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    int arr1[1000] = { 0 };
    int arr2[1000] = { 0 };
    // ‰»Î
    scanf("%d %d", &n, &m);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    //¥¶¿Ì
    int j = 0;
    i = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            printf("%d ", arr1[i]);
            i++;
        }
        else
        {
            printf("%d ", arr2[j]);
            j++;
        }
    }
    if (i == n)
    {
        for (; j < m; j++)
        {
            printf("%d ", arr2[j]);
        }
    }
    else
    {
        for (; i < n; i++)
        {
            printf("%d ", arr1[i]);
        }
    }
    return 0;
}