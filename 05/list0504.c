/*
    �������ȫ��Ԫ�ظ�ֵΪ(0.0)����ʾ
*/

#include <stdio.h>

int main(void) {
    int i;
    double vd[5];      /*����5��Ԫ�ص�����*/

    for (i = 0; i < 5; i++)
        vd[i] = 0.0;

    for (i = 0; i < 5; i++)
        printf("vd[%d] =  %.1f\n", i, vd[i]);

    return (0);
}
