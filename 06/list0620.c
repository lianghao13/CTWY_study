/*
    ȷ��Ĭ�ϵĳ�ʼ��
*/

#include <stdio.h>

int fx;                 /*��̬�洢�ڣ�����ʼ��Ϊ0��*/

int main(void) {
    static int sx;      /*��̬�洢�ڣ�����ʼ��Ϊ0��*/
    int ax;             /*�Զ��洢�ڣ�����ʼ��Ϊ��ȷ����ֵ��*/

    printf("ax = %d\n", ax);
    printf("sx = %d\n", sx);
    printf("fx = %d\n", fx);

    return (0);
}
