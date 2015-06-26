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

/*---测试显示位移位数的效果---*/
void print_utest() {
    unsigned ref = 1U;
    int pos;
    printf("unsigned型的内存位数为=%d\t", int_bits());
    printf("unsigned型的sizeof值为=%d\n", sizeof(ref));
    puts("初始值：");
    printf("ref= [%12u]\t", ref);   print_bits(ref);    puts("\n");
    pos = 31;
    printf("移位值：(单次移动位数为%d，其值与32的模是%d)\n", pos, pos % 32);
    while (ref) {
        printf("ref= [%12u]\t", ref);   print_bits(ref);    putchar('\n');
        ref <<= pos;
    }
    /*printf("ref= %u\t", ref);   print_bits(ref);    putchar('\n');*/
}

void print_itest() {
    int ref = 1;
    int pos;
    /*printf("int型的内存位数为=%d\t", int_bits());*/
    printf("int型的sizeof值为=%d\n", sizeof(ref));
    puts("初始值：");
    printf("ref= [%12d]\t", ref);   /*print_bits(ref);*/    puts("\n");
    pos = 2;
    printf("移位值：(单次移动位数为%d，其值与32的模是%d)\n", pos, pos % 32);
    while (ref) {
        printf("ref= [%12d]\t", ref);   /*print_bits(ref);*/    putchar('\n');
        ref <<= pos;
    }
    /*printf("ref= %u\t", ref);   print_bits(ref);    putchar('\n');*/
}

void print_htest() {
    short ref = 1;
    int pos;
    /*printf("int型的内存位数为=%d\t", int_bits());*/
    printf("short的sizeof值为=%d\n", sizeof(ref));
    puts("初始值：");
    printf("ref= [%12hd]\t", ref);   print_bits((unsigned)(ref));    puts("\n");
    pos = 64;
    printf("移位值：(单次移动位数为%d，其值与32的模是%d)\n", pos, pos % 32);
    while (ref) {
        printf("ref= [%12hd]\t", ref);   print_bits((unsigned)(ref));    putchar('\n');
        ref <<= pos;
    }
    printf("ref= [%12hd]\t", ref);   print_bits((unsigned)ref);    putchar('\n');
}

int main(void) {
    /*print_utest();*/
    /*print_itest();*/
    print_htest();
}
