/*
    ����ѧ���ķ�������ʾ���ֲ����
*/

#include <stdio.h>

#define NUMBER  80                  /*��������*/

int main(void) {
    int i,j;
    int num;                        /*ʵ������*/
    int tensu[NUMBER];              /*ѧ������*/
    int bunpu[11] = {0};            /*�ֲ�ͼ*/

    printf("������ѧ��������");
    do {
        scanf("%d", &num);
        if (num <1 || num > NUMBER)
            printf("\a������Χ[1��%d]:", NUMBER);
    } while (num < 1 || num > NUMBER);

    puts("������ѧ���ķ�����");
    for (i = 0; i < num; i++) {
        printf("%2d", i + 1);
        do {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("\a������Χ[0��100]��");
        } while (tensu[i] < ��|| tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }
    
    puts("\n -- �ֲ�ͼ --\n");
    printf("        100��");
    for (j = 0; j < bunpu[10]; j++)
        putchar('*');
    putchar('\n');

    for (i = 9; i >= 0; i--) {
        printf("%3d - %3d��", i * 10, i * 10 + 9);
        for (j = 0; j < bunpu[i]; j++)
            putchar('*');
        putchar('\n');
    }

    return (0);
}
