/*
 *�����ַ�����ָ���ַ��ĸ����������򷵻�0
*/

#include <stdio.h>

/*---�����ַ�����ָ���ַ��ĸ����������򷵻�0---*/
int str_chnum(const char str[], int c) {
    int     count = 0,i = 0;
    int     len = 0;
    while (str[i++]) {     /*��ȡstr����Ч����*/
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

    printf("�������ַ�����");   scanf("%s", str);      /*�����ո���Ϊ�ǽ�����ֻ����1���ַ��� */
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    /*printf("����str��Ч����Ϊsizeof(str) = %llu\n", sizeof(str));    [>���ڵ��ú�����������Ὣstr��Ϊָ�룬��ô洢ָ��Ŀռ䳤��<]*/

    printf("������Ҫ��ѯ���ַ���");  
    ch = getchar();
    /*scanf("%c", &ch);*/
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    ch_num = str_chnum(str, ch);

    if (ch_num == 0) {
        puts("û�в鵽���ַ���");
    }
    else {
        printf("�ַ�%c���ַ���%s�г��ֵĴ�����%d�Ρ�\n", ch, str, ch_num);
    }

    return(0);
}
