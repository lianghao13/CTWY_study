/*
    计算英语分数和数学分数各科中的最高分
*/

#include <stdio.h>

#define NUMBER  5

/*---返回元素个数为no的数组vc中的最大值---*/
int max_of(int vc[], int no) {
    int i;
    int max = vc[0];
    for (i =1; i < no; i++)
        if (vc[i] < max)    max = vc[i];
    return (max);
}

int main(void) {
    int i;
    int eng[NUMBER];        /*英语的分数*/
    int mat[NUMBER];        /*数学的分数*/
    int max_e, max_m;       /*各科的最高分值*/

    printf("请输入%d名学士的分数。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("[%d]英语：", i+1);  scanf("%d", &eng[i]);
        printf("    数学：", i+1);  scanf("%d", &mat[i]);
    }
    max_e = max_of(eng, NUMBER);
    max_m = max_of(mat, NUMBER);

    printf("英语的最高分=%d。\n", max_e);
    printf("数学的最高分=%d。\n", max_m);

    return (0);
}
