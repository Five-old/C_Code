#include <stdio.h>

int main()
{
    int sum1 = 0;
    int sum2 = 0;
    int i = 0;
    do
    {
        if (i % 2 == 0)
        {
            printf("i=%d是偶数，偶数求和", i);
            sum1 += i;
            printf("sum=%d\n", sum1);
            
        } else
        {
            printf("i=%d是奇数，奇数求和\n", i);
            sum2 += i;
            printf("sum=%d\n", sum2);
        }
     i++;
    } while (i <= 100);

    printf("Do while测试中：1到100中所有偶数的和是：%d\n", sum1);
    printf("Do while测试中：1到100中所有奇数的和是：%d\n", sum2);
    return 0;
}
