/*
    ��ȡ�������������ֵ,����ʾ��������ֵ֮����������֮��
*/

#include <stdio.h>

int main() {
    int x1, x2;
    int tmp = 0;
    int sum = 0;

    puts("��������������");
    printf("����1��");      scanf("%d", &x1);
    printf("����2��");      scanf("%d", &x2);

    /*�������������Ĵ�С˳��ȷ��x1<=x2*/
    if (x1 > x2) {
        tmp = x1;
        x1 = x2;
        x2 = tmp;
    }

    tmp = x1;
    do {
        sum += tmp;
        tmp++;
    } while (tmp <= x2);

    printf("���ڵ���%dС�ڵ���%d�����������ĺ���%d��\n", x1, x2, sum);

    return (0);
}
