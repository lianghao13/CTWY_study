/*
    ��ʾ�����·������ļ���
*/

#include <stdio.h>

int main(void){
    int month;

    printf("�������·ݣ�");
    scanf("%d", &month);

    if (month >= 3 && month <= 5)
        puts("�Ǵ��졣");
    else if (month >= 6 && month <= 8)
        puts("�����졣");
    else if (month >= 9 && month <= 11)
        puts("�����졣");
    else if (month ==1 || month == 2 || month == 12)
        puts("�Ƕ��졣");
    else 
        puts("�����·ݲ����ڣ���\a");

    return (0);
}
