/*
    ����������������Сֵ�ĺ���
*/

#include <stdio.h>

/*---���ؽ�С������ֵ---*/

int min3(int x, int y, int z) {
    int min = x;

    if (y < min)    min = y;
    if (z < min)    min = z;
    return (min);
}

int main(void) {
    int na, nb, nc;
    int c_scanf;
   
    puts("����������������");
    printf("����1��");      scanf("%d", &na);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("����2��");      scanf("%d", &nb);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("����3��");      scanf("%d", &nc);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;

    printf("��С������ֵ��%d��\n", min3(na, nb, nc));

    return (0);
}
