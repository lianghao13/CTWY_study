/*
    �����������������ֵ�ĺ���
*/

#include <stdio.h>

/*---���ؽϴ�������ֵ---*/

int max3(int x, int y, int z) {
    int max = x;

    if (y > max)    max = y;
    if (z > max)    max = z;
    return (max);
}

int main(void) {
    int na, nb, nc;
    
    puts("����������������");
    printf("����1��");      scanf("%d", &na);
    printf("����2��");      scanf("%d", &nb);
    printf("����3��");      scanf("%d", &nc);

    printf("�ϴ������ֵ��%d��\n", max3(na, nb, nc));

    return (0);
}
