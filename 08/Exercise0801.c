/*
 *���ú���ʽ�귵��x,y����֮��
*/

#include <stdio.h>

#define diff(x, y) ((x > y) ? (x - y) : (y - x))

int main(void) {
    int     nx, ny;
    double  dx, dy;
    int     c_scanf;

    puts("����������������");
    printf("nx = ");    scanf("%d", &nx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("ny = ");    scanf("%d", &ny);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    puts("����������ʵ����");
    printf("dx = ");    scanf("%lf", &dx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("dy = ");    scanf("%lf", &dy);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;

    printf("�������������Ĳ�ֵΪ��%d��\n",      diff(nx, ny));
    printf("��������ʵ���Ĳ�ֵΪ��%-.3f��\n",     diff(dx, dy));

    return(0);
}
