/*
 *返回字符串中指定字符所在的下标值（以第一次出现为准），若无则返回-1
*/

#include <stdio.h>

/*---返回字符串中指定字符所在的下标值（以第一次出现为准），若无则返回-1---*/
int str_char(const char str[], int c) {
    int     j;
    for (j = 0; j < sizeof(str); ++j) {
        if ((str[j] - (char)c) == 0) {
            return(j);
        }
    }
    return(-1);
}

int main(void) {
    char str[100];
    int cln_buf, pos = 0;
    int ch;

    printf("请输入字符串：");   scanf("%s", str);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("请输入要查询的字符：");   scanf("%d", &ch);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    pos = str_char(str, ch);

    if (pos == -1) {
        puts("没有查到该字符！");
    }
    else {
        printf("字符%c第一次在字符串%s中出现是位于第%d个字符上。", ch, str, pos + 1);
    }

    return(0);
}
