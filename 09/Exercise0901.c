/*
 *�����ַ��������飨��ʼ�����ڶ��棩
*/

#include <stdio.h>

int main(void) {
    char str[] = "ABC\0DEF";      /*�����ַ���������*/

    printf("�ַ���strΪ%s��\n", str);     /*��ʾ��printf������Ϊ����NULL��Ϊ�ַ��������ı�ʶ����������ݱ�����*/ 

    return(0);
}
