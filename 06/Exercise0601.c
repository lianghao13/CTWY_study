/*
    �������������н�Сֵ�ĺ���
*/

#include <stdio.h>

/*---���ؽ�С������ֵ---*/

int minof(int x, int y) {
        return((x < y) ? x : y);
}

int main(void) {
    int na, nb;
    int cln_buf;
    
    puts("����������������");
    printf("����1��");      scanf("%d", &na);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
       ; 
    printf("����2��");      scanf("%d", &nb);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
       ; 

    printf("��С������ֵ��%d��\n", minof(na, nb));

    return (0);
}
