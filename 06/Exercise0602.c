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
    int cln_buf;
   
    puts("����������������");
    printf("����1��");      scanf("%d", &na);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("����2��");      scanf("%d", &nb);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("����3��");      scanf("%d", &nc);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("��С������ֵ��%d��\n", min3(na, nb, nc));

    return (0);
}
