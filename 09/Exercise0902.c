/*
 *��ʼ���ַ����󣬸�ֵΪ���ַ���
*/

#include <stdio.h>

int main(void) {
    char str[] = "ABC";                 /*��ʼ���ַ���*/
    int     i;
    unsigned    count = sizeof(str);

    for (i = 0; i < count; ++i) {
        str[i] = '\0';
    }

    printf("�ַ���str�ĳ���Ϊ%u������Ϊ%s��\n", count, str);     /*��ʾ��printf������Ϊ����NULL��Ϊ�ַ��������ı�ʶ����������ݱ�����*/ 

    return(0);
}
