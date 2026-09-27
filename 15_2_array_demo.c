#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    srand(time(NULL));
    printf("数组长度为：%d\n\n", len);
    printf("原始数组为：\n");
    
    //遍历打印原始数组元素
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
        if (i == len - 1)
        {
            printf("\n\n");
        }
    }

    //随机打乱数组元素
    for (int i = 0; i < len; i++)
    {
        //获取数组长度范围内的随机索引
        int index = rand() % len;
        //将数组元素索引于随机索引交换
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }

    printf("随机打乱后的数组为：\n");

    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}