/*
    �ж�����������ֵ֮�����10�ıȽ�
*/

#include <stdio.h>

int main(void) {
    int x1, x2;
    int tmp = 0;

    puts("����������������");
    printf("����A��");      scanf("%d", &x1);
    printf("����B��");      scanf("%d", &x2);

/*    if (x1 < x2 )
        tmp = x2 - x1;
    else
        tmp = x1 - x2;
*/
    tmp = (x1 < x2) ? (x2 - x1) : (x1 - x2);

    if (tmp < 10 || tmp == 10)
        puts("���ǵ�ֵС�ڵ���10��");
    else
        puts("���ǵĲ���ڵ���11��");

    return (0);
}
