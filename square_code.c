#include <stdio.h>

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("正方形打印完毕！\n");
 
    // 外层：控制行数，共9行
    for (int i = 1; i <= 9; i++)
    {
        // 内层：控制每行打印的#数量，第i行就打印i个
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("正三角形打印完毕！\n");
        // 外层：控制行数，共9行
    for (int i = 1; i <= 9; i++)
    {
        // 内层：控制每行打印的#数量，第i行就打印i个
        for (int j = i; j <= 9; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("倒三角形打印完毕！\n");
    return 0;
}
