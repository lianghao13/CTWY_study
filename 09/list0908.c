/*
 *�ж��ַ����ĳ���
*/

#include <stdio.h>

/*---�����ַ���str�ĳ���---*/
unsigned str_length(const char str[]) {
    unsigned    len = 0;
    while (str[len]) {
        len++;
    }
    return(len);
}

int main(void) {
    char    st[100];
    int     cln_buf;

    printf("�������ַ�����");       scanf("%s", st);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("�ַ���%s�ĳ���Ϊ%u��\n", st, str_length(st));

    return(0);
}
