/*
 *����ʵ���ַ��������򱣴�
*/

#include <stdio.h>

/*---���򱣴��ַ���---*/
void rev_stringn(char str[]) {
    unsigned    i = 0, len = 0;
    char        temp;

    while (str[i++]) {                          /*��ȡ�ַ�������Ч����*/
        len++;
    }

    for (i = 0; i < (len / 2); ++i) {           /*���򱣴��ַ���*/
        temp = str[i];
        str[i] = str[(len - 1) - i];
        str[(len - 1) - i] = temp;
    }
    
    i = 0;                                     /*��ӡ�����ַ���*/
    while (str[i]) {
        putchar(str[i++]);
    }
    putchar('\n');
}

int main(void) {
    char    str[100];
    int     cln_buf;

    printf("�������ַ���:");    scanf("%s", str);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    puts("���ַ������򱣴�����Ϊ��");
    rev_stringn(str);

    return(0);
}
