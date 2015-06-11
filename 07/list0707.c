/*
 *��ʾ��unsigned�������ƺ����ƺ��ֵ
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

/*---��ʾunsigned�͵�λ������---*/
void print_bits(unsigned x) {
    int i;
    for (i = int_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1': '0');
}

int main(void) {
    unsigned nx, no;
    int c_scanf;

    printf("������һ���Ǹ�������");
    scanf("%u", &nx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("λ��λ����");          scanf("%u", &no);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;

    printf("\n ����       =");       print_bits(nx);
    printf("\n ���ƺ��ֵ =");       print_bits(nx << no);
    printf("\n ���ƺ��ֵ =");       print_bits(nx >> no);
    putchar('\n');

    return(0);
}
