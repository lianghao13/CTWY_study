/*
 *��ʼ���ַ����󣬸�ֵΪ���ַ���
*/

#include <stdio.h>

int main(void) {
    char str[] = "ABC";                 /*��ʼ���ַ���*/
    int     i;

    for (i = 0; i < (int)sizeof(str); ++i) {
        str[i] = '\0';
    }

    printf("�ַ���str�ĳ���Ϊ%d������Ϊ%s��\n", (int)sizeof(str), str);     /*��ʾ��printf������Ϊ����NULL��Ϊ�ַ��������ı�ʶ����������ݱ�����*/ 

    return(0);
}
