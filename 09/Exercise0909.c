/*
 *����ʵ�ֽ��ַ���ת��Ϊ���ַ���
*/

#include <stdio.h>
#include <string.h>

/*---���ַ���ת��Ϊ���ַ���---*/
void null_string(char str[], unsigned len) {
    //unsigned i = 0, count = 0;
    //[>---��ȡ�����ַ����������Ч����---<]
    //while (str[i++]) {
        //count++;
    //}
    memset(str, 0, len);
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

    null_string(str, count);

    i = 0;  len = 0;
    while (str[i++]) {
        len++;
    }

    puts("���ַ����ÿ��ַ��������Ϊ��");
    printf("str�ַ����ĳ���sizeof(str)=%llu\t", sizeof(str));
    printf("str�ַ�������Ч����len=%u\n", len);
    /*---��ӡ�ַ��������д洢��ASCII��---*/
    for (i = 0; i < sizeof(str); ++i) {
        printf("%3d: 0x%x\n", i, str[i]);
    }

    return(0);
}
