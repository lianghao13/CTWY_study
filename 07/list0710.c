/*
 *��0.01Ϊ��λ����������0.0������1.0��ѭ�������������ƣ�
*/

#include <stdio.h>

int main(void) {
    int i;
    float x;

    for (i = 0; i <= 1.0; i++) {
        x = (float)i / (float)100.0;
        printf("x = %f\n", x);
    }

    return(0);
}
