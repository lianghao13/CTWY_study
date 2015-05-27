/*
    计算英语分数和数学分数各科中的最低分（不修改传入数组的原始值）
*/

#include <stdio.h>

#define NUMBER  5

/*---返回元素个数为no的数组vc中的最小值（使用const修饰符禁止函数修改传入数组）---*/
int min_of(const int *vc, int no) {
    int i;
    int min = vc[0];
    for (i =1; i < no; i++)
        if (vc[i] < min)    min = vc[i];
    return (min);
}

int main(void) {
    int i;
    int eng[NUMBER];        /*英语的分数*/
    int mat[NUMBER];        /*数学的分数*/
    int min_e, min_m;       /*各科的最高分值*/

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
    min_e = min_of(eng, NUMBER);
    min_m = min_of(mat, NUMBER);

    printf("英语的最低分=%d。\n", min_e);
    printf("数学的最低分=%d。\n", min_m);

    return(0);
}
