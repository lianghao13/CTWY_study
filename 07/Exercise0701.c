/*
 *显示无符号整数左移的值等于其乘以2的指数幂后的值；同理，右移为除以2的指数幂后的值
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

/*---显示unsigned型的位串内容---*/
void print_bits(unsigned x) {
    int i;
    for (i = int_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1': '0');
}

int main(void) {
    unsigned nx, no, Lresult, Rresult;
    int i, c_scanf;

    printf("请输入一个非负整数：");          scanf("%u", &nx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("位移位数（非负数）：");          scanf("%u", &no);
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
    
    puts("\n下面以内存的表现形式表现该整数。");
    printf("\n 整数                =");       print_bits(nx);
    printf("\n 左移后的值          =");       print_bits(nx << no);
    printf("\n 其乘以2的指数幂的值 =");       print_bits(Lresult);
    printf("\n 右移后的值          =");       print_bits(nx >> no);
    printf("\n 其除以2的指数幂的值 =");       print_bits(Rresult);
    putchar('\n');
    puts("\n因此，对无符号整数而言，左移与乘2等效；右移与除2等效。");

    return(0);
}
