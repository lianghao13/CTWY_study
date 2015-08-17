/*
 *计算标准输入流中出现的数字字符数（第3版，使用并排的'*'表示数字字符出现的次数）
*/

#include <stdio.h>

int main(void) {
    int     i, ch, j;
    int     cnt[10] = {0};          /*数字字符的出现次数，与下标对应*/

    while (1) {                     /*死循环，有跳出条件*/
        ch = getchar();
        if (ch == EOF)  break;

        if (ch >= '0' && ch <= '9')
            cnt[ch - '0']++;
    }
    
    puts("数字字符的出现次数（图形化表示）");
    for (i = 0; i < 10; ++i) {
        printf("'%d': 出现%d次\t", i, cnt[i]);
        for (j = 0; j < cnt[i]; ++j) {
            putchar('*');
        }
        putchar('\n');
    }

    return(0);
}
