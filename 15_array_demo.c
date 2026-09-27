#include <stdio.h>


int main()
{

    int arr[5];
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {

        printf("请输入第%d个分数：", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("输入完毕！\n");

    for (int i = 0; i < len; i++)
    {
        printf("第%d个分数是：%d\n", i + 1, arr[i]);
    }

    int max = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("最高分是：%d\n", max);

    return 0;
}