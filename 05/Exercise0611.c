/*
    输入5名学生3个科目的分数并显示出每科的最高得分和每名学生的平均成绩
*/

#include <stdio.h>

#define NUMBER 5                /*学生人数*/   
#define COURSE 3                /*科目数*/

/*---求传入数组每列(即每个科目)的最大值---*/
int max_Colum(const int ary[NUMBER][COURSE], int colum) {
    int i,max;
    max = ary[0][colum];
    for (i = 0; i < NUMBER; ++i) {
        max = (max > ary[i][colum]) ? max : ary[i][colum];
    }
}

int main(void) {
    int i;
    int snum = 0;                /*及格学生人数*/
    int tensu[NUMBER];           /*学生分数*/
    int succs[NUMBER];           /*及格学生一览表（保存及格学生的“下标”）*/

    puts("请输入学生的分数。");
    for (i = 0; i < NUMBER; i++) {
        printf("%2d号：", i + 1);
        scanf("%d", &tensu[i]);
        if (tensu[i] >= 60)
            succs[snum++] = i;   /*添加到及格学生一览表中*/
    }

    puts("及格学生一览表");
    puts("--------------");
    for (i = 0; i < snum; i++)
        printf("%2d号（%3d分）\n", succs[i]+1, tensu[succs[i]]);

    return (0);
}
