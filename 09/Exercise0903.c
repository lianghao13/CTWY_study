/*
 *�����ַ�����ָ���ַ����ڵ��±�ֵ���Ե�һ�γ���Ϊ׼���������򷵻�-1
*/

#include <stdio.h>

/*---�����ַ�����ָ���ַ����ڵ��±�ֵ���Ե�һ�γ���Ϊ׼���������򷵻�-1---*/
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

    printf("�������ַ�����");   scanf("%s", str);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("������Ҫ��ѯ���ַ���");   scanf("%d", &ch);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    pos = str_char(str, ch);

    if (pos == -1) {
        puts("û�в鵽���ַ���");
    }
    else {
        printf("�ַ�%c��һ�����ַ���%s�г�����λ�ڵ�%d���ַ��ϡ�", ch, str, pos + 1);
    }

    return(0);
}
