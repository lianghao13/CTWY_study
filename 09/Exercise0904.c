/*
 *返回字符串中指定字符的个数，若无则返回0
*/

#include <stdio.h>

/*---返回字符串中指定字符的个数，若无则返回0---*/
int str_chnum(const char str[], int c) {
    int     count = 0,i = 0;
    int     len = 0;
    while (str[i++]) {     /*获取str的有效长度*/
        len++;
    }

    for (i = 0; i < len; ++i) {
        if (str[i] == (char)c) {
            count++;
        }
    }

    return(count);
}

int main(void) {
    char str[100];
    int cln_buf, ch_num = 0;
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

    ch_num = str_chnum(str, ch);

    if (ch_num == 0) {
        puts("没有查到该字符！");
    }
    else {
        printf("字符%c在字符串%s中出现的次数是%d次。\n", ch, str, ch_num);
    }

    return(0);
}
