/*
 *ʹ�ú�����ʵ�ֽ��ַ�����ʾָ������
*/

#include <stdio.h>

/*---��ָ����������ʾ�ַ���---*/
void put_stringn(const char str[], int no) {
    unsigned    j = 0, i;

    for (i = 0; i < no; ++i, j = 0) {
        printf("%u��", i + 1);
        while (str[j]) {
            printf("%c", str[j++]);
        }
        putchar('\n');
    }
}

int main(void) {
    char    str[100];
    unsigned    num;
    int     cln_buf;

    printf("�������ַ���:");    scanf("%s", str);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("��������Ҫ��ӡ�Ĵ���:");    scanf("%u", &num);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    puts("�����������£�");
    put_stringn(str, num);

    return(0);
}
