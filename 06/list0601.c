/*
    �������������нϴ�ֵ�ĺ���
*/

#include <stdio.h>

/*���ؽϴ�������ֵ---*/

int maxof(int x, int y) {
    if (x > y)
        return (x);
    else
        return (y);
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

    printf("�ϴ������ֵ��%d��\n", maxof(na, nb));

    return (0);
}
