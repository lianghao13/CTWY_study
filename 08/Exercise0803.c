/*
 *ʹ�ú���ʽ�꣬ʵ��"type"�͵���ֵ��������
*/

#include <stdio.h>

#define swap(type, a, b) {type tmp;tmp = (a), (a) = (b), (b) = tmp;}

int main(void) {
    int     nx, ny;
    double  dx, dy;
    int     c_scanf;

    puts("��������������ֵ��");
    printf("nx = ");    scanf("%d", &nx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ; 
    printf("ny = ");    scanf("%d", &ny);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    puts("����������ʵ��ֵ��");
    printf("dx = ");    scanf("%lf", &dx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ; 
    printf("dy = ");    scanf("%lf", &dy);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;

    swap(int, nx, ny);
    swap(double, dx, dy);
    
    puts("\n���ú���ʽ��ʵ����ֵ������Ľ����");
    printf("nx = %d;\tny = %d\n", nx, ny);
    printf("dx = %f;\tdy = %f\n", dx, dy);

    return(0);
}
