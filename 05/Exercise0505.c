/*
  ����������ֵ�����������е�ȫ��Ԫ�ؽ��е������У�����Ԫ������Ϊż��
*/

#include <stdio.h>
#define NUMBER   8            //��������

int main(void) {
    int i;
    int vx[NUMBER];      /*����NUMBER��Ԫ�ص�����*/
    int c_scanf;

    puts("�������Ԫ�ظ�����ֵ��");
    for (i = 0; i < NUMBER; i++) {
        printf("vx[%d]:", i);       scanf("%d", &vx[i]);
        while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
            ;
    }

    for (i = 0; i < (NUMBER / 2); i++) {
        int temp = vx[i];
        vx[i] = vx[(NUMBER - 1) - i];
        vx[(NUMBER - 1) - i] = temp;
    }

    for (i = 0; i < NUMBER; i++)
        printf("vx[%d] = %d\n", i, vx[i]);

    return (0);
}
