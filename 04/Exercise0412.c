/*
    计算并显示从1到5的和（使用复合赋值运算符和后置递增运算符,for语句版）
*/

#include <stdio.h>

int main(void){
    int no;
    int sum = 0;

    for (no = 1; no < 6; ++no) {
        sum += no;
    }

    printf("1到5的合计值是%d。\n", sum);

    return (0);
}
