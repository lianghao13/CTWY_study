/*
 *�����ַ����е������ַ���
*/

#include <stdio.h>

/*---���ַ���str�е������ַ�����������cnt---*/
void str_dcount(const char str[], int cnt[]) {
    unsigned    i = 0;
    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9') {
            cnt[str[i] - '0']++;
        }
        i++;
    }
}

int main(void) {
    int     i, cln_buf;
    int     dcnt[10] = {0};
    char    str[100];

    printf("�������ַ�����");   scanf("%s", str);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    str_dcount(str, dcnt);

    puts("�����ַ��ĳ��ִ�����");
    for (i = 0; i < 10; ++i) {
        printf("'%d':%d\n", i, dcnt[i]);
    }

    return(0);
}
