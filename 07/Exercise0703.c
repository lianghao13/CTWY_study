/*
 *ʹ�ú���ʵ���޷�����ָ��λ��ֵ
*/

#include <stdio.h>
#include <limits.h>

/*---����������x�����õ�λ��---*/
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
    ref = (1U << (unsigned)pos);
    return(x | ref);
}

/*---�����޷���������posλ��Ϊ0���ֵ---*/
unsigned reset(unsigned x, int pos) {
    unsigned ref;
    ref = (1U << (unsigned)pos);
    return(x & (~ ref));
}

/*---�����޷���������posλȡ�����ֵ---*/
unsigned inverse(unsigned x, int pos) {
    unsigned ref;
    ref = (1U << (unsigned)pos);
    return(x ^ ref);
}

/*---������ʾλ�Ƽ���λ����Ч��---*/
void print_ntest() {
    unsigned ref;
    printf("unsigned�͵��ڴ�λ��Ϊ=%d\t", int_bits());
    ref = (1U >> (int_bits() - 1));
    printf("ref= %u\t", ref);
    print_bits(ref); putchar('\n');
}

int main(void) {
    unsigned nx;
    int no, c_scanf;

    printf("������һ���Ǹ�������");          scanf("%u", &nx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    do {
        printf("ָ������λ�����Ǹ�������");  scanf("%d", &no);
        while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
            ;
        if (no < 0 || no >= int_bits()) {
            printf("\a����ֵ���󣬻ᵼ����λ������������������롣\n");
        }
    } while (no < 0 || no >= int_bits());
    
    /*print_ntest();*/
    printf("\n ���� %u ���ڴ���ʽΪ��                   ", nx);     print_bits(nx);
    printf("\n �������ҵ� %d λ��Ϊ1����ڴ���ʽΪ��    ", no + 1);     print_bits(set(nx, no));
    printf("\n �������ҵ� %d λ��Ϊ0����ڴ���ʽΪ��    ", no + 1);     print_bits(reset(nx, no));
    printf("\n �������ҵ� %d λȡ������ڴ���ʽΪ��     ", no + 1);     print_bits(inverse(nx, no));
    putchar('\n');

    return(0);
}
