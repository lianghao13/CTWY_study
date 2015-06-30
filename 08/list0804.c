/*
 *响铃并显示宏定义
*/

#include <stdio.h>

#define putsa(str) (putchar('\a'), puts(str))

int main(void) {
    int na;
    int c_scanf;

    printf("请输入一个整数：");     scanf("%d", &na);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    if (na) {
        putsa("这个数不是0。");
    }
    else {
        putsa("这个数是0。");
    }
    
    return(0);
}
