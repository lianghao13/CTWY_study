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
    int c_scanf;
    
    puts("����������������");
    printf("����1��");      scanf("%d", &na);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
       ; 
    printf("����2��");      scanf("%d", &nb);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
       ; 

    printf("��С������ֵ��%d��\n", minof(na, nb));

    return (0);
}
