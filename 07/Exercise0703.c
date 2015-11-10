/*
 *ʹ�ú���ʵ���޷�����ָ��λ��ֵ
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
    return(count_bits(~ 0U));
}

/*---��ʾunsigned�͵�λ������---*/
void print_bits(unsigned x) {
    int i;
    for (i = int_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1': '0');
}

/*---�����޷�����������nλ��ֵ---*/
unsigned rrotate(unsigned x, int n) {
    return(x >> n);
}

/*---�����޷�����������nλ��ֵ---*/
unsigned lrotate(unsigned x, int n) {
    return(x << n);
}

/*---�����޷���������posλ��Ϊ1���ֵ---*/
unsigned set(unsigned x, int pos) {
    unsigned ref;
    pos -= 1;
    ref = lrotate(1U, pos);
    return(x | ref);
}

/*---�����޷���������posλ��Ϊ0���ֵ---*/
unsigned reset(unsigned x, int pos) {
    unsigned ref;
    pos -= 1;
    ref = ~ (lrotate(1U, pos));
    return(x & ref);
}

/*---�����޷���������posλȡ�����ֵ---*/
unsigned inverse(unsigned x, int pos) {
    unsigned ref;
    pos -= 1;
    ref = lrotate(1U, pos);
    return(x ^ ref);
}


int main(void) {
    unsigned nx;
    int no, cln_buf;
    char flag;

    printf("������һ���Ǹ�������");     scanf("%u", &nx);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    do {
        printf("ָ������λ�����Ǹ�������"); scanf("%d", &no);
        while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
            ;
        flag = 0;
        if (no < 0 || no > int_bits()) {
            flag = 1;
            printf("\a����ֵ����λ��������Χ�����������롣\n");
        }
    } while (flag);
    
    printf("\n ����%-12u���ڴ���ʽΪ��\t", nx);     print_bits(nx);
    printf("\n�����%dλ��Ϊ1����ڴ���ʽΪ��\t", no);     print_bits(set(nx, no));
    printf("\n�����%dλ��Ϊ0����ڴ���ʽΪ��\t", no);     print_bits(reset(nx, no));
    printf("\n�����%dλȡ������ڴ���ʽΪ��\t", no);     print_bits(inverse(nx, no));
    putchar('\n');

    return(0);
}
