/*
 *ʹ�ú���ʵ���޷�����ָ��λ��ʼ��ָ��λ����ֵ
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

/*---�����޷���������posλ��ʼ��nλ��Ϊ1���ֵ---*/
unsigned set_n(unsigned x, int pos, int n) {
    unsigned ref;
    int i;
    pos -= 1;
    for (i = 0; i < n; ++i) {
        ref = 1U << pos++;
        x |= ref;
    }
    return(x);
}

/*---�����޷���������posλ��ʼ��nλ��Ϊ0���ֵ---*/
unsigned reset_n(unsigned x, int pos, int n) {
    unsigned ref;
    int i;
    pos -= 1;
    for (i = 0; i < n; ++i) {
        /*������0��ͨ��&������0�Ĺ�ͬ���ã���λ�������0��Ӱ����������1��ȡ������*/
        ref = ~(1U << pos++);
        /*pos++;*/
        /*printf("\nref:\t");     print_bits(ref);    putchar('\n');*/
        x &= ref;
        /*printf("\nx:\t");     print_bits(x);    putchar('\n');*/
    }
    return(x);
}

/*---�����޷���������posλ��ʼ��nλȡ�����ֵ---*/
unsigned inverse_n(unsigned x, int pos, int n) {
    unsigned ref;
    int i;
    pos -= 1;
    for (i = 0; i < n; ++i) {
        ref = 1U << pos++;
        x ^= ref;
    }
    return(x);
}

int main(void) {
    unsigned nx;
    int pos, count, c_scanf;
    char flag;

    printf("������һ���Ǹ�������");          scanf("%u", &nx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    do {
        printf("ָ��Ҫ���õĿ�ʼλ�����Ǹ�������");  scanf("%d", &pos);
        while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
            ;
        printf("ָ��Ҫ���õ�λ���������Ǹ�������");  scanf("%d", &count);
        while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
            ;
        flag = 0;
        if (pos < 0 || pos >= int_bits() || (pos + count) > int_bits() || count < 0) {
            flag = 1;
            puts("����ֵ�����������������!");
        }
    } while (flag);
    
    printf("\n����%-12u���ڴ���ʽΪ��\t\t", nx);     print_bits(nx);
    printf("\n �����%dλ����%dλ��Ϊ1����ڴ���ʽΪ��\t", pos, count);     print_bits(set_n(nx, pos, count));
    printf("\n �����%dλ����%dλ��Ϊ0����ڴ���ʽΪ��\t", pos, count);     print_bits(reset_n(nx, pos, count));
    printf("\n �����%dλ����%dλȡ������ڴ���ʽΪ��\t", pos, count);     print_bits(inverse_n(nx, pos, count));
    putchar('\n');

    return(0);
}
