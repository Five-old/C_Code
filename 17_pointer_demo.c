#include <stdio.h>

int main()
{
    char ch = 'h';
    char* s_ptr = &ch;
    printf("修改前：%c\n", ch);
    *s_ptr = 'b';
    printf("修改后：%c\n", ch);
    int a = 28435;
    int c = 0;
    int* b = &a;
    printf("a=%d b=%d\n",a,b);
    printf("指针获取数据：%d\n",*b);
    printf("指针修改数据\n");
    *b = 111;
    printf("指针修改后的数据*b：%d\n",*b);
    printf("指针修改后的数据a：%d\n",a);
    printf("数据c的值：%d\n",c);
    c = *b;
    printf("把*b赋值给数据c的值：%d\n",c);


    
    return 0;
}