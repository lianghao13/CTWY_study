/*
 *��ʾunsigned�͵��߼��롢�߼����߼����ͷ���
*/

#include <stdio.h>

/*---����������x��1��λ��---*/
int count_bits(unsigned x) {
    int count = 0;
    while (x) {
        if (x & 1U) count++;
        x >>= 1;
    }
    return(count);
}

/*---����unsigned�͵�λ��---*/
int int_bits(void) {
    return(count_bits(~0U));
}

/*---��ʾunsigned�͵�λ������---*/
void print_bits(unsigned x) {
    int i;
    for (i = int_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1': '0');
}

int main(void) {
    unsigned na, nb;
    int cln_buf;

    puts("�����������Ǹ�������");
    printf("����A��");          scanf("%u", &na);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("����B��");          scanf("%u", &nb);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("\n A     =");       print_bits(na);
    printf("\n B     =");       print_bits(nb);
    printf("\n A & B =");       print_bits(na & nb);        /*�߼���*/
    printf("\n A | B =");       print_bits(na | nb);        /*�߼���*/
    printf("\n A ^ B =");       print_bits(na ^ nb);        /*�߼����*/
    printf("\n ~A    =");       print_bits(~na);            /*ȡ��*/
    printf("\n ~B    =");       print_bits(~nb);            /*ȡ��*/
    putchar('\n');

    return(0);
}
