/*
 *������ʾ�ַ����е��ַ�
*/

#include <stdio.h>

/*---��ʾ�ַ����������У�---*/
void put_string(const char str[]) {
    unsigned    i = 0;

    while (str[i]) {
        putchar(str[i++]);
    }
}

int main(void) {
    char    str[100];
    int     cln_buf;

    printf("�������ַ���:");    scanf("%s", str);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    put_string(str);
    putchar('\n');

    return(0);
}
