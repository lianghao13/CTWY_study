/*
 *ʹ�ú���ʽ�����a,b,c,d�е����ֵ
*/

#include <stdio.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))

int main(void) {
    int a, b, c, d;
    int c_scanf;

    puts("������4��������");
    printf("a = ");     scanf("%d", &a);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("b = ");     scanf("%d", &b);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("c = ");     scanf("%d", &c);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("d = ");     scanf("%d", &d);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    
    puts("�������ĸ�ֵ�����ֵ�ķ�����");
    printf("����1��\tmax(max(a,b),max(c,d))=%d\n", max(max(a,b),max(c,d)));
    printf("����2��\tmax(max(max(a,b),c),d)=%d\n", max(max(max(a,b),c),d));

    return(0);
}
