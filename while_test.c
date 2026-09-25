#include <stdio.h>

int main()
{
    int sum = 0;
    int i = 0;
    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            printf("i=%d是偶数，求和", i);
            sum += i;
            printf("sum=%d\n", sum);
        }
        i++;
    }

    printf("while测试中：1到100中所有偶数的和是：%d\n", sum);
    return 0;
}