/*
    ���ΰ�5,4,3,2,1��ֵ������ÿ��Ԫ�ز���ʾ��ʹ��for��䣩
*/

#include <stdio.h>

int main(void) {
    int i;
    int vc[5];      /*����5��Ԫ�ص�����*/
    int j = 5;

    for (i = 0; i < 5; i++){
        vc[i] = j;
        j--;
    }

    for (i = 0; i < 5; i++)
        printf("vc[%d] =  %d\n", i, vc[i]);

    return (0);
}
