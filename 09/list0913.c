/*
 *���ַ����е�Ӣ���ַ����д�Сдת��
*/

#include <ctype.h>
#include <stdio.h>

/*---���ַ����е�Ӣ���ַ�תΪ��д��ĸ---*/
void str_toupper(char str[]) {
    unsigned    i = 0;
    while (str[i]) {
        str[i] = toupper(str[i]);
        i++;
    }
}

/*---���ַ����е�Ӣ���ַ�תΪСд��ĸ---*/
void str_tolower(char str[]) {
    unsigned    i = 0;
    while (str[i]) {
        str[i] = tolower(str[i]);
        i++;
    }
}

int main(void) {
    char    str[100];
    int     cln_buf;

    printf("�������ַ�����");   scanf("%s", str);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    str_toupper(str);
    printf("��д��ĸ��%s\n", str);

    str_tolower(str);
    printf("Сд��ĸ��%s\n", str);

    return(0);
}
