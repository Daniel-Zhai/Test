#define _CRT_SECURE_NO_WARNINGS

//剑指offer
// 
//算法部分
//JZ53  数字在升序数组中出现的次数
//JZ4  二维数组中的查找
//JZ11  旋转数组的最小数字
// 
// 
//JZ53  数字在升序数组中出现的次数
int GetNumberOfK(int* data, int dataLen, int k) {
    // write code here
    int count = 0;
    int i = 0;
    for (i = 0; i < dataLen; i++)
    {
        if (data[i] == k)
            count++;
    }
    return count;
}
/*
int main()
{
    int n = 0;
    int data[1000] = {0};
    int i = 0;
    int k = 0;
    int ret = 0;
    while(~scanf("%d",&data[i]))
    {
        n++;
    }
    scanf("%d",&k);
    ret = GetNumberOfK(data, n, k);
    printf("%d",ret);
    return 0;
}*/


//JZ4  二维数组中的查找
bool Find(int target, int** array, int arrayRowLen, int* arrayColLen) {
    // write code here
    int i = 0;
    int j = *arrayColLen - 1;
    while (i < arrayRowLen && j >= 0)
    {
        if (array[i][j] == target)
            return true;
        if (array[i][j] > target)
            j--;
        if (array[i][j] < target)
            i++;
    }
    return false;
}

//JZ11  旋转数组的最小数字
int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
    // write code here
    int i = 0;
    for (i = rotateArrayLen - 1; i >= 1; i--)
    {
        if (rotateArray[i - 1] > rotateArray[i])
            return rotateArray[i];
    }
    return rotateArray[0];
}