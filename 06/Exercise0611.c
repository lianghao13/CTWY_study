/*
    输入NUMBER名学生COURSE个科目的分数并显示出每科的最高得分和每名学生的平均成绩
*/

#include <stdio.h>

#define NUMBER 5                /*学生人数*/   
#define COURSE 3                /*科目数*/

/*---求传入数组每列（即每个科目）的最大值---*/
int max_Colum(const int ary[NUMBER][COURSE], int colum) {
    int i, max;
    max = ary[0][colum];
    for (i = 0; i < NUMBER; ++i) {
        max = (max > ary[i][colum]) ? max : ary[i][colum];
    }
    return(max);
}

/*---求传入数组每行（即每名学生）的平均成绩---*/
double ave_Row(const int ary[NUMBER][COURSE], int row) {
    int j = 0;
    double ave = 0;
    int sum = 0;
    for ( ; j < COURSE; ++j) {
        sum += ary[row][j];
    }
    ave = (double)sum / COURSE;
    return(ave);
}

int main(void) {
    int i, j;
    int tensu[NUMBER][COURSE];             /*二维数组保存学生和相应科目的分数*/
    int max[COURSE];                       /*三个科目（语文lang，数学math，英语eng）的最高分以下标为标识保存在一维数组中*/
    double ave[NUMBER];                    /*每名学生的平均成绩保存在以下标标识的一维数组中*/

    char const *str[COURSE] = { "语文", "数学", "英语" }, *p[COURSE];
    for (i = 0; i < COURSE; ++i) {
        p[i] = str[i];
    }

    puts("请输入每名学生各科的分数。");
    for (i = 0; i < NUMBER; i++) {
        int c_scanf;
        printf("第%3d号学生\n", i + 1);
        for (j = 0; j < COURSE; ++j) {
            printf(" %s成绩：", p[j]);   scanf("%d", &tensu[i][j]);
            while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
                ;
        }
    }

    puts("各科的最高分为：");
    puts("-----------------");
    for (j = 0; j < COURSE; ++j) {
        max[j] = max_Colum(tensu, j);
        printf(" %s （%3d分）\n", p[j], max[j]);
    }
    puts("每名学生的平均分为：");
    puts("-----------------");
    for (i = 0; i < NUMBER; i++) {
        ave[i] = ave_Row(tensu, i);
        printf("第%d号学生（%6.2lf分）\n", (i + 1), ave[i]);
    }

    return(0);
}
