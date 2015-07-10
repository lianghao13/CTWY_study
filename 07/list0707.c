/*
 *��ʾ��unsigned�������ƺ����ƺ��ֵ
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
    unsigned nx, no;
    int cln_buf;

    printf("������һ���Ǹ�������");
    scanf("%u", &nx);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("λ��λ����");          scanf("%u", &no);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("\n ����       =");       print_bits(nx);
    printf("\n ���ƺ��ֵ =");       print_bits(nx << no);
    printf("\n ���ƺ��ֵ =");       print_bits(nx >> no);
    putchar('\n');

    return(0);
}
