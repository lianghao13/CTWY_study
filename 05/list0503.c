/*
    ���ΰ�1,2,3,4,5��ֵ������ÿ��Ԫ�ز���ʾ��ʹ��for��䣩
*/

#include <stdio.h>

int main(void) {
    int i;
    int vc[5];      /*����5��Ԫ�ص�����*/

    for (i = 0; i < 5; i++)
        vc[i] = i + 1;

    for (i = 0; i < 5; i++)
        printf("vc[%d] =  %d\n", i, vc[i]);

    return (0);
}
