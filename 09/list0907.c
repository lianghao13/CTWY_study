/*
 *读取并显示字符串数组
*/

#include <stdio.h>

int main(void) {
    int     i;
    char    cs[3][128];
    int     cln_buf;

    for (i = 0; i < 3; ++i) {
        printf("cs[%d]：", i);      scanf("%s", cs[i]);
        while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
            ;
    }

    for (i = 0; i < 3; ++i) {
        printf("cs[%d] = \"%s\"\n", i, cs[i]);
    }

    return(0);
}
