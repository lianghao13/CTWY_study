/*
   Ϊ������ȫ��Ԫ�ط��侲̬�洢�ڣ���ȷ�϶�����ʼ��Ϊ0
*/

#include <stdio.h>
#define NUMBER 5

int main(void) {
    static int arry[NUMBER];            /*��̬�洢�ڣ�����ʼ��Ϊ0��*/
    int ax;                             /*�Զ��洢�ڣ�����ʼ��Ϊ��ȷ����ֵ��*/
    int i;

    printf("ax = %d\n", ax);
    puts("---------");
    for (i = 0; i < NUMBER; ++i) {
        printf("arry[%d] = %d\n", i, arry[i]);
    }

    return (0);
}
