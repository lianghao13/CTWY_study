/*
    ���һ��������
*/

#include <stdio.h>

int main(void){
    int i, j;
    int width, height;

    puts("�����������һ�������Ρ�");
    printf("��");     scanf("%d", &width);
    printf("����");     scanf("%d", &height);

    for (i = 1; i <= height; i++) {                 /*��������height��*/
        for (j = 1; j <= width; j++)                /*��ʾwidth��'*'*/
            putchar('*');
        putchar('\n');                              /*����*/
    }

    return (0);
}
