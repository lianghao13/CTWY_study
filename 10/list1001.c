/*
 *�������������ĺ���������
*/

#include <stdio.h>

/*---��n1��n2�ĺ͡���ֱ𱣴���sum��diff---*/
void sum_diff(int n1, int n2, int sum, int diff) {
    sum = n1 + n2;
    diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}

int main(void) {
    int     na, nb;
    int     wa = 0, sa = 0;
    int     cln_buf;

    puts("����������������");
    printf("����A��");      scanf("%d", &na);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("����B��");      scanf("%d", &nb);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    sum_diff(na, nb, wa, sa);

    printf("����֮����%d��\n����֮����%d��\n", wa, sa);

    return(0);
}
