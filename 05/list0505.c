/*
    ��ͷ��ʼ˳��Ϊ�����Ԫ�ؽ��г�ʼ��(1,2,3,4,5)��������ʾ
*/

#include <stdio.h>

int main(void) {
    int i;
    int vc[5] = {1,2,3,4,5};      /*��ʼ��*/

    for (i = 0; i < 5; i++)
        printf("vc[%d] =  %d\n", i, vc[i]);

    return (0);
}
