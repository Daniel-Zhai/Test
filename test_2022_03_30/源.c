#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
// we have defined the necessary header files here FOR this problem.
// IF additional header files are needed IN your program, please IMPORT here.
int main()
{
    // please define the C input here. FOR EXAMPLE: int n; scanf("%d",&n);
    int i = 0;
    int a[] = { 0 };
    int count = 0;
    int sum = 0;
    int word = 0;
    scanf("%s", &a);
    // please finish the FUNCTION body here.
    while ('\0' != a[i])
    {
        if (' ' != a[i])
        {
            count++;
            i++;
        }
        else
        {
            sum += count;
            word++;
            count = 0;
            i++;
        }
    }
    word++;
    // please define the C output here. FOR EXAMPLE: printf("%d",a);
    printf("%.2f\n", (float)sum / word);
    return 0;
}