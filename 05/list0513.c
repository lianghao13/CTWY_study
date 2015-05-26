/*
    输入学生的分数并显示出分布情况
*/

#include <stdio.h>

#define NUMBER 80                   /*人数上限*/

int main(void) {
    int i,j;
    int num = 0;                    /*实际人数*/
    int tensu[NUMBER];              /*学生分数*/
    int bunpu[11] = {0};            /*分布图*/

    for (i = 0; i < NUMBER; ++i) {
        tensu[i] = -1;               /*为保证对分数输入的错误判断，分数初始为-1*/ 
    }

    printf("请输入学生人数：");
    do {
        scanf("%d", &num);
        int c_scanf;                    /*scanf()后用于清除输入缓存*/ 
        while(((c_scanf = getchar()) != '\n' ) && (c_scanf != EOF))
            ;                                        /*清空缓冲区中的多余字符*/ 
        if (num <1 || num > NUMBER)
            printf("\a输入告警！\n人数范围应在[1到%d]，请再次输入:", NUMBER);
    } while (num < 1 || num > NUMBER);

    puts("请输入学生的分数：");
    for (i = 0; i < num; i++) {
        printf("%2d号：", i + 1);
        do {
            scanf("%d", &tensu[i]);
            int c_scanf;                    /*scanf()后用于清除输入缓存*/ 
            while(((c_scanf = getchar()) != '\n' ) && (c_scanf != EOF))
                ;                                        /*清空缓冲区中的多余字符*/ 
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("\a分数范围应为[0到100]：");
        } while (tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }
    
    puts("\n -- 分布图 --\n");
    printf("      100：");
    for (j = 0; j < bunpu[10]; j++)
        putchar('*');
    putchar('\n');

    for (i = 9; i >= 0; i--) {
        printf("%3d - %3d：", i * 10, i * 10 + 9);
        for (j = 0; j < bunpu[i]; j++)
            putchar('*');
        putchar('\n');
    }

    return (0);
}
