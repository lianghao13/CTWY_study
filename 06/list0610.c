/*
    计算最高分
*/

#include <stdio.h>

#define NUMBER 5

static int tensu[NUMBER];

int top(void);

int main(void) {
    extern int tensu[];
    int i;

    printf("请输入%d名学生的分数。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        int c_scanf;
        printf("%d:", i+1);     scanf("%d", &tensu[i]);
        while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
            ;
    }
 
    printf("最高分=%d\n", top());
    
    return (0);
}

/*---返回数组tensu的最大值（函数版）---*/
int top(void) {
    extern int tensu[];
    int i;
    int max = tensu[0];
    for (i = 0; i < NUMBER; i++) {
        if (tensu[i] > max)
            max = tensu[i];
    }
    return (max);
}
