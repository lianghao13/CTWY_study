/*
 *ʹ��ö�����Ͷ����Ա�ͼ��ڣ����ó�����ʾ����
*/

#include <stdio.h>

enum sex    { Male, Female, Invalid };

enum month  { January = 1, February, March, April, May, June, July, August, September, October, November, December, Error };

/*---������Ϣ����---*/
void err_input(void) {
    puts("����ֵ�������飡");
}

/*---ѡ���Ա�---*/
enum sex select_sex(void) {
    int tmp;
    int c_s;
    
    do {
        printf("0...Male    1...Female  2...������");   scanf("%d", &tmp);
        while((c_s = getchar()) != '\n' && c_s != EOF)
            ;
    } while (tmp < Male || tmp > Invalid);
    return((enum sex)tmp);
}

/*---ѡ���·�---*/
enum month select_month(void) {
    int tmp;
    int c_s;
    
    do {
        printf("1..January 2..February 3..March 4..April 5..May 6..June 7..July 8..August 9..September 10..October 11..November 12..December 13..������");   scanf("%d", &tmp);
        while((c_s = getchar()) != '\n' && c_s != EOF)
            ;
    } while (tmp < January || tmp > Error);
    return((enum month)tmp);
}

int main(void) {
    enum sex    sex;
    enum month  month;

    puts("��ʾ�Ա��ѡ��");
    switch (sex = select_sex()) {
        case Male:    puts("��ѡ��������ԡ�");    break;
        case Female:  puts("��ѡ�����Ů�ԡ�");    break;
    
        default:    err_input();     break;
    }

    puts("��ʾ�·ݵ�ѡ��");
    switch (month = select_month()) {
        case January:       printf("��ѡ�����%2d�£�Ӣ�ı�ʾΪJanuary��", month);      break;
        case February:      printf("��ѡ�����%2d�£�Ӣ�ı�ʾΪFebruary��", month);     break;
        case March:         printf("��ѡ�����%2d�£�Ӣ�ı�ʾΪMarch��", month);        break;
        case April:         printf("��ѡ�����%2d�£�Ӣ�ı�ʾΪApril��", month);        break;
        case May:           printf("��ѡ�����%2d�£�Ӣ�ı�ʾΪMay��", month);          break;
        case June:          printf("��ѡ�����%2d�£�Ӣ�ı�ʾΪJune��", month);         break;
        case July:          printf("��ѡ�����%2d�£�Ӣ�ı�ʾΪJuly��", month);         break;
        case August:        printf("��ѡ�����%2d�£�Ӣ�ı�ʾΪAugust��", month);       break;
        case September:     printf("��ѡ�����%2d�£�Ӣ�ı�ʾΪSeptember��", month);    break;
        case October:       printf("��ѡ�����%2d�£�Ӣ�ı�ʾΪOctober��", month);      break;
        case November:      printf("��ѡ�����%2d�£�Ӣ�ı�ʾΪNovember��", month);     break;
        case December:      printf("��ѡ�����%2d�£�Ӣ�ı�ʾΪDecember��", month);     break;
    
        default:    err_input();         break;
    }
    putchar('\n');

    return(0);
}
