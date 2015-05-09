/*
    输入5名学生的分数并显示出他们的总分和平均分
*/

#include <stdio.h>

int main(void) {
    int uchida;         /*内田同学的分数*/
    int satoh;          /*佐藤同学的分数*/ 
    int sanaka;         /*佐中同学的分数*/
    int hiraki;         /*平木同学的分数*/
    int masaki;         /*真崎同学的分数*/
    int sum = 0;

    puts("请输入分数。");
    printf("1号：");    scanf("%d", &uchida);
    printf("2号：");    scanf("%d", &satoh);
    printf("3号：");    scanf("%d", &sanaka);
    printf("4号：");    scanf("%d", &hiraki);
    printf("5号：");    scanf("%d", &masaki);

    sum += uchida;
    sum += satoh;
    sum += sanaka;
    sum += hiraki;
    sum += masaki;

    printf("总分：%5d\n", sum);
    printf("平均分：%5.1f\n", (double)sum / 5);

    return (0);
}
