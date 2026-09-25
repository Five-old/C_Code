#include <stdio.h>

int main()
{
    char ch = 'h';
    char* s_ptr = &ch;
    printf("修改前：%c\n", ch);
    *s_ptr = 'b';
    printf("修改后：%c\n", ch);

    
    return 0;
}