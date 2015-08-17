/*
 *使用函数实现无符号数指定位的值
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
    return(count_bits(~ 0U));
}

/*---显示unsigned型的位串内容---*/
void print_bits(unsigned x) {
    int i;
    for (i = int_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1': '0');
}

/*---返回无符号整数右移n位的值---*/
unsigned rrotate(unsigned x, int n) {
    return(x >> n);
}

/*---返回无符号整数左移n位的值---*/
unsigned lrotate(unsigned x, int n) {
    return(x << n);
}

/*---返回无符号整数第pos位设为1后的值---*/
unsigned set(unsigned x, int pos) {
    unsigned ref;
    pos -= 1;
    ref = lrotate(1U, pos);
    return(x | ref);
}

/*---返回无符号整数第pos位设为0后的值---*/
unsigned reset(unsigned x, int pos) {
    unsigned ref;
    pos -= 1;
    ref = ~ (lrotate(1U, pos));
    return(x & ref);
}

/*---返回无符号整数第pos位取反后的值---*/
unsigned inverse(unsigned x, int pos) {
    unsigned ref;
    pos -= 1;
    ref = lrotate(1U, pos);
    return(x ^ ref);
}


int main(void) {
    unsigned nx;
    int no, cln_buf;
    char flag;

    printf("请输入一个非负整数：");     scanf("%u", &nx);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    do {
        printf("指定设置位数（非负数）："); scanf("%d", &no);
        while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
            ;
        flag = 0;
        if (no < 0 || no > int_bits()) {
            flag = 1;
            printf("\a输入值有误，位数超过范围。请重新输入。\n");
        }
    } while (flag);
    
    printf("\n 整数%-12u的内存形式为：\t", nx);     print_bits(nx);
    printf("\n右起第%d位设为1后的内存形式为：\t", no);     print_bits(set(nx, no));
    printf("\n右起第%d位设为0后的内存形式为：\t", no);     print_bits(reset(nx, no));
    printf("\n右起第%d位取反后的内存形式为：\t", no);     print_bits(inverse(nx, no));
    putchar('\n');

    return(0);
}
