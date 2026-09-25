#include <stdio.h>

int a = 10;
int b = 20;
int c = 30;
int max = 0;

int main()
{
    max = a > b ? a : b;
    max = max > c ? max : c;
    printf("最大值是：%d\n", max);
    return 0;
}
