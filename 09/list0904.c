/*
 *ѯ�����ֲ���ʾ�ʺ����ȡ�ַ�����
*/

#include <stdio.h>

int main(void) {
    char    name[40];
    int     cln_buf;

    printf("�������������֣�");     scanf("%s", name);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("���ã�%s ����/Ůʿ����\n", name);

    return(0);
}
