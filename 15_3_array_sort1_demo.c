#include <stdio.h>

// 冒泡排序
int main()
{
    int arr[10] = {476, 34, 56, 76, 45, 104, 9, 92, 45, 93};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("数组长度：%d\n", len);
    // printf("数组长度：%d\n", arr[9]);
    // 打印冒泡排序前数组
    printf("数组排序前：\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
        if (i == len - 1)
        {
            printf("\n");
        }
    }

    // 冒泡排序
    for (int i = 0; i < len - 1; i++)
    {
        // 因为每次冒泡都要从数组第一个元素开始，所以这里j要=0.不可以=
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        if (i == len - 2)
        {
            printf("\n冒泡排序完成！！！\n");
        }
    }

    printf("数组排序后：\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
        if (i == len - 1)
        {
            printf("\n");
        }
    }
    return 0;
}