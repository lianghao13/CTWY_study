/*
 *函数实现将字符串转换为空字符串
*/

#include <stdio.h>
#include <string.h>

/*---将字符串转换为空字符串---*/
void null_string(char str[], unsigned len) {
    //unsigned i = 0, count = 0;
    //[>---获取传入字符串数组的有效长度---<]
    //while (str[i++]) {
        //count++;
    //}
    memset(str, 0, len);
}

int main(void) {
    char    str[100];
    int     cln_buf;
    unsigned    i = 0, len = 0, count = 0;

    count = (unsigned)sizeof(str);

    printf("请输入字符串:");    scanf("%s", str);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    while (str[i++]) {
        len++;
    }
    puts("当前字符串str的属性为：");
    printf("str字符串的长度sizeof(str)=%llu\t", sizeof(str));
    printf("str字符串的有效长度len=%u\n", len);

    null_string(str, count);

    i = 0;  len = 0;
    while (str[i++]) {
        len++;
    }

    puts("该字符串置空字符串后输出为：");
    printf("str字符串的长度sizeof(str)=%llu\t", sizeof(str));
    printf("str字符串的有效长度len=%u\n", len);
    /*---打印字符串数组中存储的ASCII码---*/
    for (i = 0; i < sizeof(str); ++i) {
        printf("%3d: 0x%x\n", i, str[i]);
    }

    return(0);
}
