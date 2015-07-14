/*
 *函数实现删除字符串中的数字字符
*/

#include <stdio.h>
#include <string.h>

/*---删除字符串str中的所有数字字符---*/
void del_digit(char str[]) {
    unsigned    i = 0, j = 0;
    char        temp[100] = {'\0'};

    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9') {
            i++;
        }
        else {
            temp[j++] = str[i++];
        }
    }

    memcpy(str, temp, sizeof(temp));
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

    del_digit(str);

    i = 0;  len = 0;
    while (str[i++]) {
        len++;
    }

    puts("该字符串删除数字字符后输出为：");
    printf("%s\n", str);
    printf("str字符串的长度sizeof(str)=%llu\t", sizeof(str));
    printf("str字符串的有效长度len=%u\n", len);
    /*---打印字符串数组中存储的ASCII码---*/
    for (i = 0; i < len; ++i) {
        printf("%3d: 0x%x\n", i, str[i]);
    }

    return(0);
}

