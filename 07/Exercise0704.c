/*
 *使用函数实现无符号数指定位开始到指定位数的值
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

/*---返回无符号整数第pos位开始的n位设为1后的值---*/
unsigned set_n(unsigned x, int pos, int n) {
    unsigned ref;
    int i;
    pos -= 1;
    for (i = 0; i < n; ++i) {
        ref = 1U << pos++;
        x |= ref;
    }
    return(x);
}

/*---返回无符号整数第pos位开始的n位设为0后的值---*/
unsigned reset_n(unsigned x, int pos, int n) {
    unsigned ref;
    int i;
    pos -= 1;
    for (i = 0; i < n; ++i) {
        /*由于置0是通过&操作和0的共同作用，移位补充进的0会影响结果，而置1和取反不会*/
        ref = ~(1U << pos++);
        /*pos++;*/
        /*printf("\nref:\t");     print_bits(ref);    putchar('\n');*/
        x &= ref;
        /*printf("\nx:\t");     print_bits(x);    putchar('\n');*/
    }
    return(x);
}

/*---返回无符号整数第pos位开始的n位取反后的值---*/
unsigned inverse_n(unsigned x, int pos, int n) {
    unsigned ref;
    int i;
    pos -= 1;
    for (i = 0; i < n; ++i) {
        ref = 1U << pos++;
        x ^= ref;
    }
    return(x);
}

int main(void) {
    unsigned nx;
    int pos, count, c_scanf;
    char flag;

    printf("请输入一个非负整数：");          scanf("%u", &nx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    do {
        printf("指定要设置的开始位数（非负数）：");  scanf("%d", &pos);
        while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
            ;
        printf("指定要设置的位数计数（非负数）：");  scanf("%d", &count);
        while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
            ;
        flag = 0;
        if (pos < 0 || pos >= int_bits() || (pos + count) > int_bits() || count < 0) {
            flag = 1;
            puts("输入值有误，请检查后重新输入!");
        }
    } while (flag);
    
    printf("\n整数%-12u的内存形式为：\t\t", nx);     print_bits(nx);
    printf("\n 右起第%d位连续%d位设为1后的内存形式为：\t", pos, count);     print_bits(set_n(nx, pos, count));
    printf("\n 右起第%d位连续%d位设为0后的内存形式为：\t", pos, count);     print_bits(reset_n(nx, pos, count));
    printf("\n 右起第%d位连续%d位取反后的内存形式为：\t", pos, count);     print_bits(inverse_n(nx, pos, count));
    putchar('\n');

    return(0);
}
