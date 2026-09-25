#include <stdio.h>

int main() {

    int arr[5];
    for (int i = 0; i < 5; i++) {

        printf("请输入第%d个分数：", i + 1);
        scanf("%d", &arr[i]);
    }
    printf ("输入完毕！\n");
    for (int i = 0; i < 5; i++)
    {
        printf("第%d个分数是：%d\n", i + 1, arr[i]);
    }

    return 0;
}