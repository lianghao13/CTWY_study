/*
 *����ʵ��ɾ���ַ����е������ַ�
*/

#include <stdio.h>
#include <string.h>

/*---ɾ���ַ���str�е����������ַ�---*/
void del_digit(char str[]) {
    unsigned    i = 0, j = 0;
    char        temp[100] = {'\0'};

    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9') {
            i++;
        }
        else {
            temp[j++] = str[i++];
        }
    }

    memcpy(str, temp, sizeof(temp));
}

int main(void) {
    char    str[100];
    int     cln_buf;
    unsigned    i = 0, len = 0, count = 0;

    count = (unsigned)sizeof(str);

    printf("�������ַ���:");    scanf("%s", str);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    while (str[i++]) {
        len++;
    }
    puts("��ǰ�ַ���str������Ϊ��");
    printf("str�ַ����ĳ���sizeof(str)=%llu\t", sizeof(str));
    printf("str�ַ�������Ч����len=%u\n", len);

    del_digit(str);

    i = 0;  len = 0;
    while (str[i++]) {
        len++;
    }

    puts("���ַ���ɾ�������ַ������Ϊ��");
    printf("%s\n", str);
    printf("str�ַ����ĳ���sizeof(str)=%llu\t", sizeof(str));
    printf("str�ַ�������Ч����len=%u\n", len);
    /*---��ӡ�ַ��������д洢��ASCII��---*/
    for (i = 0; i < len; ++i) {
        printf("%3d: 0x%x\n", i, str[i]);
    }

    return(0);
}

