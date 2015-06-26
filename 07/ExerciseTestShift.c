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

/*---������ʾλ��λ����Ч��---*/
void print_utest() {
    unsigned ref = 1U;
    int pos;
    printf("unsigned�͵��ڴ�λ��Ϊ=%d\t", int_bits());
    printf("unsigned�͵�sizeofֵΪ=%d\n", sizeof(ref));
    puts("��ʼֵ��");
    printf("ref= [%12u]\t", ref);   print_bits(ref);    puts("\n");
    pos = 31;
    printf("��λֵ��(�����ƶ�λ��Ϊ%d����ֵ��32��ģ��%d)\n", pos, pos % 32);
    while (ref) {
        printf("ref= [%12u]\t", ref);   print_bits(ref);    putchar('\n');
        ref <<= pos;
    }
    /*printf("ref= %u\t", ref);   print_bits(ref);    putchar('\n');*/
}

void print_itest() {
    int ref = 1;
    int pos;
    /*printf("int�͵��ڴ�λ��Ϊ=%d\t", int_bits());*/
    printf("int�͵�sizeofֵΪ=%d\n", sizeof(ref));
    puts("��ʼֵ��");
    printf("ref= [%12d]\t", ref);   /*print_bits(ref);*/    puts("\n");
    pos = 2;
    printf("��λֵ��(�����ƶ�λ��Ϊ%d����ֵ��32��ģ��%d)\n", pos, pos % 32);
    while (ref) {
        printf("ref= [%12d]\t", ref);   /*print_bits(ref);*/    putchar('\n');
        ref <<= pos;
    }
    /*printf("ref= %u\t", ref);   print_bits(ref);    putchar('\n');*/
}

void print_htest() {
    short ref = 1;
    int pos;
    /*printf("int�͵��ڴ�λ��Ϊ=%d\t", int_bits());*/
    printf("short��sizeofֵΪ=%d\n", sizeof(ref));
    puts("��ʼֵ��");
    printf("ref= [%12hd]\t", ref);   print_bits((unsigned)(ref));    puts("\n");
    pos = 64;
    printf("��λֵ��(�����ƶ�λ��Ϊ%d����ֵ��32��ģ��%d)\n", pos, pos % 32);
    while (ref) {
        printf("ref= [%12hd]\t", ref);   print_bits((unsigned)(ref));    putchar('\n');
        ref <<= pos;
    }
    printf("ref= [%12hd]\t", ref);   print_bits((unsigned)ref);    putchar('\n');
}

int main(void) {
    /*print_utest();*/
    /*print_itest();*/
    print_htest();
}
