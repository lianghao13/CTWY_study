/*
    输入正整数,循环显示1234567890,显示位数和输入的整数值相同
*/

#include <stdio.h>

int main(void){
    int num, i;
    int j = 0;
    
    do {
        printf("请输入一个正整数:");    scanf("%d", &num);
        if (num <= 0)
            puts("\a请输入正整数。");
    } while (num <= 0);

    for (i = 0; i < num; ++i) {
        if (j < 9) {
            printf("%d", ++j);
        }
        else {
            j = 0;
            printf("%d", j);
        }
    }

    putchar('\n');

    return (0);
}
