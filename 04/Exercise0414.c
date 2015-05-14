/*
    显示身高和标准体重的对照表，身高的范围和间隔由输入的整数值控制，标准体重精确到小数点后2位 
*/

#include <stdio.h>

int main(void){
    int height01, height02, step, tmp;
    float weight;
    
    do {
        printf("开始数值（cm）:");    scanf("%d", &height01);
        printf("结束数值（cm）:");    scanf("%d", &height02);
        printf("间隔数值（cm）:");    scanf("%d", &step);
        if (height01 > height02 || step <= 0) {
            puts("\a请输入合理的范围值。");
        }
    } while (height02 <= height01);

    tmp = (height02 - height01) % step;

    if (tmp == 0) {
        for (tmp = height01; tmp <= height02; tmp+=step) {
            weight = (float)0.9 * tmp - 90;
            printf("%dcm    %4.2fkg\n", tmp, weight);
        }
    }
    else {
        tmp = height01;
        while (tmp < height02) {
            weight = (float)0.9 * tmp - 90;
            printf("%dcm    %4.2fkg\n", tmp, weight);
            tmp += step;
        }
        weight = (float)0.9 * height02 - 90;
        printf("%dcm    %4.2fkg\n", height02, weight);
    }

    return(0);
}
