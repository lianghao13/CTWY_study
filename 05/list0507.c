/*
   ��������Ԫ�ص�ֵ����ʾ 
*/

#include <stdio.h>

int main(void) {
    int i;
    int vx[5];      /*����5��Ԫ�ص�����*/

    for (i = 0; i < 5; i++) {
        printf("vx[%d]:", i);
        scanf("%d", &vx[i]);
    }

    for (i = 0; i < 5; i++)
        printf("vx[%d] = %d\n", i, vx[i]);

    return (0);
}
