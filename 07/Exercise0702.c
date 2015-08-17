/*
 *使用函数实现无符号数的左移和右移
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


int main(void) {
    unsigned nx, Lresult, Rresult;
    int no, cln_buf;

    printf("请输入一个非负整数：");          scanf("%u", &nx);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    printf("位移位数（非负数）：");          scanf("%d", &no);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    Lresult = lrotate(nx, no);
    Rresult = rrotate(nx, no);
    
    printf("\n 整数 %u 的内存形式为：", nx);                print_bits(nx);
    printf("\n 左移后的值 %u 的内存形式为：", Lresult);     print_bits(Lresult);
    printf("\n 右移后的值 %u 的内存形式为：", Rresult);     print_bits(Rresult);
    putchar('\n');

    return(0);
}
