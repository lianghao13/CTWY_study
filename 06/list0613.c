/*
    计算英语分数和数学分数各科中的最高分（不修改传入数组的原始值）
*/

#include <stdio.h>

#define NUMBER  5

/*---返回元素个数为no的数组vc中的最大值（使用const修饰符禁止函数修改传入数组）---*/
int max_of(const int vc[], int no) {
    int i;
    int max = vc[0];
    for (i =1; i < no; i++)
        if (vc[i] > max)    max = vc[i];
    return (max);
}

int main(void) {
    int i;
    int eng[NUMBER];        /*英语的分数*/
    int mat[NUMBER];        /*数学的分数*/
    int max_e, max_m;       /*各科的最高分值*/

    printf("请输入%d名学生的分数。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        int c_scanf;
        printf("[%d]英语：", i+1);      scanf("%d", &eng[i]);
        while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
            ;
        printf("   数学：");            scanf("%d", &mat[i]);
        while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
            ;
    }
    max_e = max_of(eng, NUMBER);
    max_m = max_of(mat, NUMBER);

    printf("英语的最高分=%d。\n", max_e);
    printf("数学的最高分=%d。\n", max_m);

    return(0);
}
