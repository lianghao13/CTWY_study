/*
    ����5��ѧ���ķ�������ʾ�����е���߷ֺ���ͷ�
*/

#include <stdio.h>

#define NUMBER  5            /*ѧ������*/   

int main(void) {
    int i;
    int tensu[NUMBER];       /*ѧ������*/
    int max,min;             /*��߷ֺ���ͷ�*/

    puts("������ѧ���ķ�����");
    for (i = 0; i < NUMBER; i++) {
        printf("%2d�ţ�", i + 1);
        scanf("%d", &tensu[i]);
    }

    min = max = tensu[0];
    for (i = 0; i < NUMBER; i++) {
        if (tensu[i] > max)      max = tensu[i];
        if (tensu[i] < min)      min = tensu[i];
    }
    printf("��߷֣�%d\n",max);
    printf("��ͷ֣�%d\n",min);

    return (0);
}
