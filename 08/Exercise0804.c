/*
 *使用枚举类型定义性别和季节，并用程序显示出来
*/

#include <stdio.h>

enum sex    { Male, Female, Invalid };

enum month  { January = 1, February, March, April, May, June, July, August, September, October, November, December, Error };

/*---错误信息反馈---*/
void err_input(void) {
    puts("输入值错误，请检查！");
}

/*---选择性别---*/
enum sex select_sex(void) {
    int tmp;
    int c_s;
    
    do {
        printf("0...Male    1...Female  2...结束：");   scanf("%d", &tmp);
        while((c_s = getchar()) != '\n' && c_s != EOF)
            ;
    } while (tmp < Male || tmp > Invalid);
    return((enum sex)tmp);
}

/*---选择月份---*/
enum month select_month(void) {
    int tmp;
    int c_s;
    
    do {
        printf("1..January 2..February 3..March 4..April 5..May 6..June 7..July 8..August 9..September 10..October 11..November 12..December 13..结束：");   scanf("%d", &tmp);
        while((c_s = getchar()) != '\n' && c_s != EOF)
            ;
    } while (tmp < January || tmp > Error);
    return((enum month)tmp);
}

int main(void) {
    enum sex    sex;
    enum month  month;

    puts("显示性别的选择。");
    switch (sex = select_sex()) {
        case Male:    puts("您选择的是男性。");    break;
        case Female:  puts("您选择的是女性。");    break;
    
        default:    err_input();     break;
    }

    puts("显示月份的选择。");
    switch (month = select_month()) {
        case January:       printf("您选择的是%2d月，英文表示为January。", month);      break;
        case February:      printf("您选择的是%2d月，英文表示为February。", month);     break;
        case March:         printf("您选择的是%2d月，英文表示为March。", month);        break;
        case April:         printf("您选择的是%2d月，英文表示为April。", month);        break;
        case May:           printf("您选择的是%2d月，英文表示为May。", month);          break;
        case June:          printf("您选择的是%2d月，英文表示为June。", month);         break;
        case July:          printf("您选择的是%2d月，英文表示为July。", month);         break;
        case August:        printf("您选择的是%2d月，英文表示为August。", month);       break;
        case September:     printf("您选择的是%2d月，英文表示为September。", month);    break;
        case October:       printf("您选择的是%2d月，英文表示为October。", month);      break;
        case November:      printf("您选择的是%2d月，英文表示为November。", month);     break;
        case December:      printf("您选择的是%2d月，英文表示为December。", month);     break;
    
        default:    err_input();         break;
    }
    putchar('\n');

    return(0);
}
