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

    printf("�ϴ������ֵ��%d��\n", max3(na, nb, nc));

    return (0);
}
