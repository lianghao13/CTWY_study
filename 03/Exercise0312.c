/*
    ��ʾ�����·������ļ��ڣ�switch�棩
*/

#include <stdio.h>

int main(void){
    int month;

    printf("�������·ݣ�");
    scanf("%d", &month);

    switch (month) {
     case 12 :
     case 1 :
     case 2 :   puts("�Ƕ��졣");   break;
     case 3 :
     case 4 :
     case 5 :   puts("�Ǵ��졣");   break;
     case 6 :
     case 7 :
     case 8 :   puts("�����졣");   break;
     case 9 :
     case 10 :
     case 11 :  puts("�Ƕ��졣");   break;
     default :  puts("������·ݲ����ڣ���\a"); break;
    }
/*    if (month >= 3 && month <= 5)
        puts("�Ǵ��졣");
    else if (month >= 6 && month <= 8)
        puts("�����졣");
    else if (month >= 9 && month <= 11)
        puts("�����졣");
    else if (month ==1 || month == 2 || month == 12)
        puts("�Ƕ��졣");
    else 
        puts("�����·ݲ����ڣ���\a");
*/
    return (0);
}
