/*
 *��ʾ�޷����������Ƶ�ֵ���������2��ָ���ݺ��ֵ��ͬ������Ϊ����2��ָ���ݺ��ֵ
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
    unsigned nx, no, Lresult, Rresult;
    int i, c_scanf;

    printf("������һ���Ǹ�������");          scanf("%u", &nx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("λ��λ�����Ǹ�������");          scanf("%u", &no);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    Lresult = Rresult = nx;

    for (i = 0; i < (int)no; ++i) {
        Lresult *= 2;
    }
    for (i = 0; i < (int)no; ++i) {
        Rresult /= 2;
        if (Rresult == 0)
            break;
    }
    
    puts("\n�������ڴ�ı�����ʽ���ָ�������");
    printf("\n ����                =");       print_bits(nx);
    printf("\n ���ƺ��ֵ          =");       print_bits(nx << no);
    printf("\n �����2��ָ���ݵ�ֵ =");       print_bits(Lresult);
    printf("\n ���ƺ��ֵ          =");       print_bits(nx >> no);
    printf("\n �����2��ָ���ݵ�ֵ =");       print_bits(Rresult);
    putchar('\n');
    puts("\n��ˣ����޷����������ԣ��������2��Ч���������2��Ч��");

    return(0);
}
