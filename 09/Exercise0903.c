/*
 *�����ַ�����ָ���ַ����ڵ��±�ֵ���Ե�һ�γ���Ϊ׼���������򷵻�-1
*/

#include <stdio.h>

/*---�����ַ�����ָ���ַ����ڵ��±�ֵ���Ե�һ�γ���Ϊ׼���������򷵻�-1---*/
int str_char(const char str[], int c) {
    int     j = 0;
    int     len = 0;
    while (str[j++]) {
        len++;
    }
    /*printf("�ַ�����Ч����Ϊlen = %d\n", len);*/

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

    printf("�������ַ�����");   scanf("%s", str);      /*�����ո���Ϊ�ǽ�����ֻ����1���ַ��� */
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    /*printf("����str��Ч����Ϊsizeof(str) = %llu\n", sizeof(str));    [>���ڵ��ú�����������Ὣstr��Ϊָ�룬��ô洢ָ��Ŀռ䳤��<]*/

    printf("������Ҫ��ѯ���ַ���");  
    ch = getchar();
    /*scanf("%c", &ch);*/
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("ch = %d,�ַ���ʾΪ%c,ASCII��Ϊ0x%x\n", ch, ch, ch);

    pos = str_char(str, ch);

    if (pos == -1) {
        puts("û�в鵽���ַ���");
    }
    else {
        printf("�ַ�%c��һ�����ַ���%s�г�����λ�ڵ�%d���ַ��ϡ�\n", ch, str, pos + 1);
    }

    return(0);
}
