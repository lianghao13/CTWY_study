/*
 *ʹ�ú���ʽ�꣬ʵ��"type"�͵���ֵ��������
*/

#include <stdio.h>

#define swap(type, a, b) {type tmp;tmp = (a), (a) = (b), (b) = tmp;}

int main(void) {
    int     nx, ny;
    double  dx, dy;
    int     cln_buf;

    puts("��������������ֵ��");
    printf("nx = ");    scanf("%d", &nx);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ; 
    printf("ny = ");    scanf("%d", &ny);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    puts("����������ʵ��ֵ��");
    printf("dx = ");    scanf("%lf", &dx);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ; 
    printf("dy = ");    scanf("%lf", &dy);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    swap(int, nx, ny);
    swap(double, dx, dy);
    
    puts("\n���ú���ʽ��ʵ����ֵ������Ľ����");
    printf("nx = %d;\tny = %d\n", nx, ny);
    printf("dx = %f;\tdy = %f\n", dx, dy);

    return(0);
}
