/*
 *显示unsigned型的逻辑与、逻辑或、逻辑异或和反码
*/

#include <stdio.h>

/*---返回在整数x中1的位数---*/
int count_bits(unsigned x) {
    int count = 0;
    while (x) {
        if (x & 1U) count++;
        x >>= 1;
    }
    return(count);
}

/*---返回unsigned型的位数---*/
int int_bits(void) {
    return(count_bits(~0U));
}

/*---显示unsigned型的位串内容---*/
void print_bits(unsigned x) {
    int i;
    for (i = int_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1': '0');
}

int main(void) {
    unsigned na, nb;
    int c_scanf;

    puts("请输入两个非负整数。");
    printf("整数A：");          scanf("%u", &na);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("整数B：");          scanf("%u", &nb);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;

    printf("\n A     =");       print_bits(na);
    printf("\n B     =");       print_bits(nb);
    printf("\n A & B =");       print_bits(na & nb);        /*逻辑与*/
    printf("\n A | B =");       print_bits(na | nb);        /*逻辑或*/
    printf("\n A ^ B =");       print_bits(na ^ nb);        /*逻辑异或*/
    printf("\n ~A    =");       print_bits(~na);            /*取反*/
    printf("\n ~B    =");       print_bits(~nb);            /*取反*/
    putchar('\n');

    return(0);
}
