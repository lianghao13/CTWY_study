/*
    ����5��ѧ���ķ�������ʾ�����ǵ��ֺܷ�ƽ���֣�ʹ�ö���ʽ�꣩
*/

#include <stdio.h>

#define NUMBER  5            /*ѧ������*/   

int main(void) {
    int i;
    int tensu[NUMBER];       /*ѧ������*/
    int sum = 0;             /*�ܷ�*/

    puts("������ѧ���ķ�����");
    for (i = 0; i < NUMBER; i++) {
        printf("%2d�ţ�", i + 1);
        scanf("%d", &tensu[i]);
        sum += tensu[i];
    }

    printf("�ܷ֣�%5d\n", sum);
    printf("ƽ���֣�%5.1f\n", (double)sum / NUMBER);

    return (0);
}
