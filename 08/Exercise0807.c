/*
 *�����׼�������г��ֵ������ַ�������3�棬ʹ�ò��ŵ�'*'��ʾ�����ַ����ֵĴ�����
*/

#include <stdio.h>

int main(void) {
    int     i, ch, j;
    int     cnt[10] = {0};          /*�����ַ��ĳ��ִ��������±��Ӧ*/

    while (1) {                     /*��ѭ��������������*/
        ch = getchar();
        if (ch == EOF)  break;

        if (ch >= '0' && ch <= '9')
            cnt[ch - '0']++;
    }
    
    puts("�����ַ��ĳ��ִ�����ͼ�λ���ʾ��");
    for (i = 0; i < 10; ++i) {
        printf("'%d': ����%d��\t", i, cnt[i]);
        for (j = 0; j < cnt[i]; ++j) {
            putchar('*');
        }
        putchar('\n');
    }

    return(0);
}
