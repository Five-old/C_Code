#include <stdio.h>

int main()
{
    char name[5][20];
    char texts[]="hello";
    int people_count =0;
    printf("你要给几个人发送消息？\n");
    scanf("%d", &people_count);
    for (int i = 0; i < people_count; i++)
    {
        printf("请输入第%d个人的名字：", i + 1);
        if (scanf("%s", name[i]) != 1) {
            printf("输入错误！\n");
            return 1;
        }
        printf("第%d个人录入完毕\n", i + 1);   
    }
    printf("所有人员输入完毕！\n");
    for (int i = 0; i < people_count; i++)
    {
        printf("%s:%s\n", name[i], texts);
    }
    
    return 0;
}