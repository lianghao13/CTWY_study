/*
    ����ѧ���ķ�������ʾ���ֲ����
*/

#include <stdio.h>

#define NUMBER 80                   /*��������*/

int main(void) {
    int i,j;
    int num = 0;                    /*ʵ������*/
    int tensu[NUMBER];              /*ѧ������*/
    int bunpu[11] = {0};            /*�ֲ�ͼ*/

    for (i = 0; i < NUMBER; ++i) {
        tensu[i] = -1;               /*Ϊ��֤�Է�������Ĵ����жϣ�������ʼΪ-1*/ 
    }

    printf("������ѧ��������");
    do {
        scanf("%d", &num);
        int c_scanf;                    /*scanf()������������뻺��*/ 
        while(((c_scanf = getchar()) != '\n' ) && (c_scanf != EOF))
            ;                                        /*��ջ������еĶ����ַ�*/ 
        if (num <1 || num > NUMBER)
            printf("\a����澯��\n������ΧӦ��[1��%d]�����ٴ�����:", NUMBER);
    } while (num < 1 || num > NUMBER);

    puts("������ѧ���ķ�����");
    for (i = 0; i < num; i++) {
        printf("%2d�ţ�", i + 1);
        do {
            scanf("%d", &tensu[i]);
            int c_scanf;                    /*scanf()������������뻺��*/ 
            while(((c_scanf = getchar()) != '\n' ) && (c_scanf != EOF))
                ;                                        /*��ջ������еĶ����ַ�*/ 
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("\a������ΧӦΪ[0��100]��");
        } while (tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }
    
    puts("\n -- �ֲ�ͼ --\n");
    printf("      100��");
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
