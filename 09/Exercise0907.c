/*
 *����ʵ���ַ������������
*/

#include <stdio.h>

/*---��ʾ�ַ��������У�---*/
void put_rstring(const char str[]) {
    unsigned    i = 0, len = 0;
    char        re_str[100] ={ '\0' };         /*����һ���㹻�������*/

    while (str[i++]) {                         /*��ȡ�ַ�������Ч����*/
        len++;
    }

    for (i = 0; i < len; ++i) {                /*��������ַ���*/
        re_str[i] = str[(len - 1) - i];
    }
    
    i = 0;                                     /*��ӡ�����ַ���*/
    while (re_str[i]) {
        putchar(re_str[i++]);
    }
    putchar('\n');
}

int main(void) {
    char    str[100];
    int     cln_buf;

    printf("�������ַ���:");    scanf("%s", str);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    puts("���ַ����������Ϊ��");
    put_rstring(str);

    return(0);
}
