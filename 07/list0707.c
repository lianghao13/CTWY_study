/*
 *显示对unsigned型作左移和右移后的值
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
    unsigned nx, no;
    int cln_buf;

    printf("请输入一个非负整数：");
    scanf("%u", &nx);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("位移位数：");          scanf("%u", &no);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("\n 整数       =");       print_bits(nx);
    printf("\n 左移后的值 =");       print_bits(nx << no);
    printf("\n 右移后的值 =");       print_bits(nx >> no);
    putchar('\n');

    return(0);
}
