#define _CRT_SECURE_NO_WARNINGS
#include<stdbool.h>
#include<stdio.h>
int cmp(int* e1, int* e2) {
    return *e1 - *e2;
}

bool checkIfExist(int* arr, int arrSize) {
    qsort(arr, arrSize, 4, cmp);
    if (arr[0] >= 0) {
        for (int i = 0; i < arrSize - 1; i++) {
            int l = i + 1;
            int r = arrSize - 1;
            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (arr[i] * 2 < arr[mid])r = mid - 1;
                else if (arr[i] * 2 > arr[mid])l = mid + 1;
                else return true;
            }
        }
    }
    else {//存在负数，需要分别判断
        int l = 0;
        int r = arrSize - 1;
        int pos = arrSize;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (arr[mid] >= 0) {
                pos = mid;//pos是第一个正数的下标，arr有pos个负数，arrsize-pos个正数
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        //然后分别判断正数和负数部分
        for (int i = pos - 1; i >= 0; i--) {
            l = 0;
            r = pos - 2;
            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (arr[i] * 2 < arr[mid])l = mid + 1;
                else if (arr[i] * 2 > arr[mid])r = mid - 1;
                else return true;
            }
        }
        for (int i = pos; i < arrSize - 1; i++) {
            if (pos == arrSize)break;
            l = i + 1;
            r = arrSize - 1;
            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (arr[i] * 2 < arr[mid])r = mid - 1;
                else if (arr[i] * 2 > arr[mid])l = mid + 1;
                else return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[53] = { -766,259,203,601,896,-226,-844,168,126,-542,159,-833,950,-454,-253,824,-395,155,94,894,-766,-63,836,-433,-780,611,-907,695,-395,-975,256,373,-971,-813,-154,-765,691,812,617,-919,-616,-510,608,201,-138,-669,-764,-77,-658,394,-506,-675,523 };
    int ret = checkIfExist(arr, 53);
    printf("%d\n", ret);
    return 0;
}