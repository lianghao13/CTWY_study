/*
    �����ĸ������нϴ�ֵ�ĺ���
*/

#include <stdio.h>

/*---���ؽϴ�������ֵ---*/
int maxof(int x, int y) {
    return((x > y) ? x : y);
}

/*---�����ĸ����������ֵ---*/
int max4(int w, int x, int y, int z) {
    return(maxof(maxof(w, x), maxof(y, z)));
}

int main(void) {
    int na, nb, nc, nd;
    int cln_buf;
    
    puts("�������ĸ�������");
    printf("����1��");      scanf("%d", &na);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("����2��");      scanf("%d", &nb);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("����3��");      scanf("%d", &nc);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("����4��");      scanf("%d", &nd);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("�ĸ������нϴ������ֵ��%d��\n", max4(na, nb, nc, nd));

    return(0);
}
