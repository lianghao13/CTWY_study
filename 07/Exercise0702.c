/*
 *ʹ�ú���ʵ���޷����������ƺ�����
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


int main(void) {
    unsigned nx, Lresult, Rresult;
    int no, cln_buf;

    printf("������һ���Ǹ�������");          scanf("%u", &nx);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("λ��λ�����Ǹ�������");          scanf("%d", &no);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    Lresult = lrotate(nx, no);
    Rresult = rrotate(nx, no);
    
    printf("\n ���� %u ���ڴ���ʽΪ��", nx);                print_bits(nx);
    printf("\n ���ƺ��ֵ %u ���ڴ���ʽΪ��", Lresult);     print_bits(Lresult);
    printf("\n ���ƺ��ֵ %u ���ڴ���ʽΪ��", Rresult);     print_bits(Rresult);
    putchar('\n');

    return(0);
}
