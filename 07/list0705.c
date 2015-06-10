/*
 *显示unsigned型的位串
*/

#include <stdio.h>

/*---返回在整数x中设置的位数---*/
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

/*---返回unsigned型的位串内容---*/
void print_bits(unsigned x) {
    int i;
    for (i = int_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1': '0');
}

int main(void) {
    unsigned nx;
    int c_scanf;

    printf("请输入一个非负整数：");     scanf("%u", &nx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;

    print_bits(nx);
    putchar('\n');

    return(0);
}
