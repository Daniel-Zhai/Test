#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    float arr[5] = { 0.0 };
    for (i = 0; i < 5; i++)
    {
        float sum = 0.0;
        for (j = 0; j < 5; j++)
        {
            scanf("%f", &arr[j]);
            printf("%.1f ", arr[j]);
            sum += arr[j];
        }
        printf("%.1f\n", sum);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    int i = 0;
    int j = 0;
    int a = 0;
    int b = 0;
    scanf("%d %d", &n, &m);
    int arr[5][5] = { 0 };
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d %d", &a, &b);
    printf("%d\n", arr[a - 1][b - 1]);
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    int i = 0;
    int j = 0;
    int arr[10][10] = { 0 };
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    int i = 0;
    int j = 0;
    int height[10][10] = { 0 };
    int max = 0;
    int a = 0;
    int b = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &height[i][j]);
            if (max < height[i][j])
            {
                max = height[i][j];
                a = i;
                b = j;
            }
        }
    }
    printf("%d %d", a + 1, b + 1);
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    int i = 0;
    int j = 0;
    int arr1[10][10] = { 0 };
    int arr2[10][10] = { 0 };
    int flag = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr1[i][j] == arr2[i][j])
                flag = 1;
            else
                flag = 0;
        }
    }
    if (flag == 1)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    int i = 0;
    int j = 0;
    int a = 0;
    int arr[10][10] = { 0 };
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i > j)
            {
                if (arr[i][j] != 0)
                {
                    printf("NO\n");
                    return 0;
                }
            }
        }
    }
    printf("YES\n");

    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    int i = 0;
    int j = 0;
    int arr[10][10] = { 0 };
    char o = 0;
    int k = 0;
    int a = 0;
    int b = 0;
    int p = 0;
    int tmp = 0;
    scanf("%d %d ", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &k);
    for (p = 0; p < k; p++)
    {
        scanf(" %c %d %d", &o, &a, &b);
        if (o == 'r')
        {
            for (j = 0; j < m; j++)
            {
                tmp = arr[a - 1][j];
                arr[a - 1][j] = arr[b - 1][j];
                arr[b - 1][j] = tmp;
            }
        }
        if (o == 'c')
        {
            for (i = 0; i < n; i++)
            {
                tmp = arr[i][a - 1];
                arr[i][a - 1] = arr[i][b - 1];
                arr[i][b - 1] = tmp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n = 0;
    int i = 0;
    int j = 0;
    int arr[30][30] = { 0 };
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (i == j || j == 0)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("% 5d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int arr[3][3] = { 0 };
    char flag = 'C';
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf(" %c", &arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
        {
            flag = arr[i][1];
            break;
        }
        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
        {
            flag = arr[1][i];
            break;
        }
    }
    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
    {
        flag = arr[1][1];
    }
    if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
    {
        flag = arr[1][1];
    }
    if (flag == 'K')
        printf("KiKi wins!");
    else if (flag == 'B')
        printf("BoBo wins!");
    else
        printf("No winner!");
    return 0;
}