/*
    显示一个直角在右下方的直角三角形
*/

#include <stdio.h>

int main(void){
    int i, j, ln;

    puts("三角形有几层：");
    scanf("%d", &ln);

    for (i = 1; i <= ln; i++) {              /*三角形有i行*/
        for (j = 1; j <= ln - i; j++)        /*第i行就显示ln-i个' '*/
            putchar(' ');
        for (j = 1; j <= i; j++)             /*第i行就显示i个'*'*/
            putchar('*');
        putchar('\n');                       /*换行*/
    }

    return (0);
}
