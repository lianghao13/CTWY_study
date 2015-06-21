/*
 *使用函数实现无符号数指定位的值
*/

#include <stdio.h>
#include <limits.h>

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
    ref = (1U << (unsigned)pos);
    return(x | ref);
}

/*---返回无符号整数第pos位设为0后的值---*/
unsigned reset(unsigned x, int pos) {
    unsigned ref;
    ref = (1U << (unsigned)pos);
    return(x & (~ ref));
}

/*---返回无符号整数第pos位取反后的值---*/
unsigned inverse(unsigned x, int pos) {
    unsigned ref;
    ref = (1U << (unsigned)pos);
    return(x ^ ref);
}

/*---测试显示位移极限位数的效果---*/
void print_ntest() {
    unsigned ref;
    printf("unsigned型的内存位数为=%d\t", int_bits());
    ref = (1U >> (int_bits() - 1));
    printf("ref= %u\t", ref);
    print_bits(ref); putchar('\n');
}

int main(void) {
    unsigned nx;
    int no, c_scanf;

    printf("请输入一个非负整数：");          scanf("%u", &nx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    do {
        printf("指定设置位数（非负数）：");  scanf("%d", &no);
        while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
            ;
        if (no < 0 || no >= int_bits()) {
            printf("\a输入值有误，会导致移位运算溢出。请重新输入。\n");
        }
    } while (no < 0 || no >= int_bits());
    
    /*print_ntest();*/
    printf("\n 整数 %u 的内存形式为：                   ", nx);     print_bits(nx);
    printf("\n 从左至右第 %d 位设为1后的内存形式为：    ", no + 1);     print_bits(set(nx, no));
    printf("\n 从左至右第 %d 位设为0后的内存形式为：    ", no + 1);     print_bits(reset(nx, no));
    printf("\n 从左至右第 %d 位取反后的内存形式为：     ", no + 1);     print_bits(inverse(nx, no));
    putchar('\n');

    return(0);
}
