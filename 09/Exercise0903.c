/*
 *返回字符串中指定字符所在的下标值（以第一次出现为准），若无则返回-1
*/

#include <stdio.h>

/*---返回字符串中指定字符所在的下标值（以第一次出现为准），若无则返回-1---*/
int str_char(const char str[], int c) {
    int     j = 0;
    int     len = 0;
    while (str[j++]) {
        len++;
    }
    /*printf("字符串有效长度为len = %d\n", len);*/

    for (j = 0; j < len; ++j) {
        /*printf("str[%d] = %c\n", j, str[j]);*/
        /*printf("c = %c\n", c);*/

        if (str[j] == (char)c) {
            return(j);
        }
    }
    return(-1);
}

int main(void) {
    char str[100];
    int cln_buf, pos = 0;
    int ch;

    printf("请输入字符串：");   scanf("%s", str);      /*读到空格认为是结束，只读走1个字符串 */
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    /*printf("数组str有效长度为sizeof(str) = %llu\n", sizeof(str));    [>若在调用函数内运行则会将str视为指针，获得存储指针的空间长度<]*/

    printf("请输入要查询的字符：");  
    ch = getchar();
    /*scanf("%c", &ch);*/
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("ch = %d,字符表示为%c,ASCII码为0x%x\n", ch, ch, ch);

    pos = str_char(str, ch);

    if (pos == -1) {
        puts("没有查到该字符！");
    }
    else {
        printf("字符%c第一次在字符串%s中出现是位于第%d个字符上。\n", ch, str, pos + 1);
    }

    return(0);
}
