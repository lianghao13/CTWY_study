/*
 *���ú���ʽ�귵��x,y����֮��
*/

#include <stdio.h>

#define diff(x, y) (((x) > (y)) ? ((x) - (y)) : ((y) - (x)))

int main(void) {
    int     nx, ny;
    double  dx, dy;
    int     cln_buf;

    puts("����������������");
    printf("nx = ");    scanf("%d", &nx);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("ny = ");    scanf("%d", &ny);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    puts("����������ʵ����");
    printf("dx = ");    scanf("%lf", &dx);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("dy = ");    scanf("%lf", &dy);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("�������������Ĳ�ֵΪ��%d��\n",      diff(nx, ny));
    printf("��������ʵ���Ĳ�ֵΪ��%-.3f��\n",     diff(dx, dy));

    return(0);
}
