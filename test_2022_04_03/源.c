#define _CRT_SECURE_NO_WARNINGS

//��ָoffer
// 
//�㷨����
//JZ53  ���������������г��ֵĴ���
//JZ4  ��ά�����еĲ���
//JZ11  ��ת�������С����
// 
// 
//JZ53  ���������������г��ֵĴ���
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


//JZ4  ��ά�����еĲ���
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

//JZ11  ��ת�������С����
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