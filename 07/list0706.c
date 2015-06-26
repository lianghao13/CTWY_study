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
    int c_scanf;

    puts("�����������Ǹ�������");
    printf("����A��");          scanf("%u", &na);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("����B��");          scanf("%u", &nb);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
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
