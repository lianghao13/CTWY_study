/*
    ����һ���Ǹ�������������ʾ���÷Ǹ�������*��ѭ������������ָ����
*/

#include <stdio.h>

int main(void){
    int cont;

    do {
        int num, i;

        do {
            printf("������һ���Ǹ�����:");
            scanf("%d", &num);
            if (num < 0)
                puts("\a�벻Ҫ���븺����")
        } while (num < 0);                  /*num��ֵ���ڵ���0������ִ��*/

        for (i = 1; i <= num; i++)
            putchar('*');
        putchar('\n');

        printf("�Ƿ����ִ�У���Yes...0/No...9��:");
        scanf("%d", &cont);
    } while (!cont);

    return (0);
}
