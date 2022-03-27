#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    int x = 0;
//    int i = 0;
//    int count = 0;
//    int a[100] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    scanf("%d", &x);
//    for (i = 0; i < n; i++)
//    {
//        if (x == a[i])
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//    printf("printf(\"Hello world!\\n\");\n");
//    printf("cout << \"Hello world!\" << endl;\n");
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int count = 0;
//    for (i = 100; i < 1000; i++)
//    {
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                count++;
//                break;
//            }
//        }
//    }
//    printf("%d", 900 - count);
//    return 0;
//}

//int is_prime(int i)
//{
//    int j = 0;
//    for (j = 2; j < i; j++)
//    {
//        if (i % j == 0)
//            return 0;
//    }
//    return 1;
//}
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100; i < 1000; i++)
//    {
//        if (is_prime(i))
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}


#include<stdio.h>

int main()
{
    int n = 0;
    int i = 0;
    int m = 0;
    int a[1001] = { 0 };
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        a[m] = m;
    }
    for (i = 1; i <= 1000; i++)
    {
        if (a[i] != 0)
            printf("%d ", a[i]);
    }
    return 0;
}

#include<stdio.h>
struct Node
{
    int data;
    struct Node* next;
};
int main()
{
    struct Node* list = NULL;
    struct Node* tail = NULL;
    int n = 0;
    int i = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int data = 0;
        scanf("%d", &data);
        struct Node* n = (struct Node*)malloc(sizeof(struct Node));
        n->data = data;
        n->next = NULL;
        if (list == NULL)
        {
            list = n;
            tail = list;
        }
        else
        {
            tail->next = n;
            tail = tail->next;
        }
    }
    int del = 0;
    scanf("%d", &del);
    struct Node* cur = list;
    struct Node* prev = NULL;
    while (cur)
    {
        if (cur->data == del)//找到了
        {
            struct Node* pd = cur;
            if (cur == list)//删除第一个结点
            {
                list = list->next;
                cur = list;
            }
            else//不是第一个结点
            {
                prev->next = cur->next;
                cur = prev->next;
            }
            n--;
            free(pd);
        }
        else//找不到
        {
            prev = cur;
            cur = cur->next;
        }
    }
    cur = list;
    printf("%d\n", n);
    while (cur)
    {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    cur = list;
    while (cur)
    {
        del = cur;
        cur = cur->next;
        free(del);
    }
    return 0;
}

#include <iostream>
using namespace std;

class TDate
{
private:
    int Year;
    int Month;
    int Day;
public:
    TDate(int year = 0, int month = 0, int day = 0)
    {
        Year = year;
        Month = month;
        Day = day;
    }
    void print()
    {
        cout << Day << "/" << Month << "/" << Year << endl;
    }
};
int main()
{
    int year = 0;
    int month = 0;
    int day = 0;
    cin >> year >> month >> day;
    TDate d(year, month, day);
    d.print();

    return 0;
}