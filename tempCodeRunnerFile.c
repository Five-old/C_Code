#include <stdio.h>

int main()
{
    int sum = 0;
    int i = 0;
    do
    {
        if (i % 2 == 0)
        {
            printf("i=%d是偶数，求和", i);
            sum += i;
            printf("sum=%d\n", sum);
            i++;
        }

    } while (i <= 100);

    printf("1到100中所有偶数的和是：%d\n", sum);
    return 0;
}