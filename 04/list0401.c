/*
    �������������������ż���أ������Լ�����Ը����ѭ��������
*/

#include <stdio.h>

int main(void){
    int cont;       /*Ҫ������*/

    do {
        int no;

        printf("������һ��������");
        scanf("%d", &no);

        if (no % 2)
            puts("���������������");
        else
            puts("���������ż����");
        
        printf("Ҫ�ظ�һ���� ��Yes...0 / No...9��:");
        scanf("%d", &cont);    
    } while (cont == 0);

    return (0);
}
