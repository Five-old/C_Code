#include <stdio.h>

int main()
{

    for (int i = 0; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            if (i > 40)
            {
                printf("i=%d 且大于40，结束循环\n", i);
                break;
            }
            if (i % 3 == 0)
            {
                printf("i=%d是偶数，且能被3整除，不打印\n", i);
            }

            printf("i=%d是偶数\n", i);
        }
    }
    return 0;
}