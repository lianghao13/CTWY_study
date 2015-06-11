/*
 *��ʮ���ơ������ơ��˽��ƺ�ʮ��������ʽ��ʾ0~65535
*/

#include <stdio.h>

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
    return(count_bits(~0U));
}

/*---��ʾunsigned������x�ĺ�nλ---*/
void print_nbits(unsigned x, unsigned n) {
    int i = int_bits();
    i = ((int)n < i) ? (int)n - 1 : i - 1;
    for ( ; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1': '0');
}

int main(void) {
    unsigned i;

    for (i = 0; i <=65535U; ++i) {
        printf("%5u ", i);
        print_nbits(i, 16);
        printf(" %06o %04X\n", i, i);
    }

    return(0);
}
