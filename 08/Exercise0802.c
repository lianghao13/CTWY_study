/*
 *ʹ�ú���ʽ�����a,b,c,d�е����ֵ
*/

#include <stdio.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))

int main(void) {
    int a, b, c, d;
    int cln_buf;

    puts("������4��������");
    printf("a = ");     scanf("%d", &a);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("b = ");     scanf("%d", &b);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("c = ");     scanf("%d", &c);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("d = ");     scanf("%d", &d);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    
    puts("�������ĸ�ֵ�����ֵ�ķ�����");
    printf("����1��\tmax(max(a,b),max(c,d))=%d\n", max(max(a,b),max(c,d)));
    printf("����2��\tmax(max(max(a,b),c),d)=%d\n", max(max(max(a,b),c),d));

    return(0);
}
