/*
    ��ʾ��������������*�Ž�����
*/

#include <stdio.h>

int main(void){
    int i, j, ln;
    int ln_tmp, br_tmp;

    puts("��������*�����һ����������");
    printf("�������м��㣺");   scanf("%d", &ln);

    for (i = 1; i <= ln; i++) {             
        ln_tmp = 2 * i - 1;                 //��ȡÿ��Ӧ��ʾ��*����
        br_tmp = (2 * ln - ln_tmp) / 2;     //��ȡÿ��Ӧ��ʾ' '��������ȡ��Ϊ��һ��*ǰ' '�ĸ���
        for (j = 0; j < br_tmp; j++)        //����ʾ���i����Ӧ���Ŀո�
            putchar(' ');
        for (j = 0; j < ln_tmp; j++)        //����ʾ�뵱ǰ����Ӧ����*��
            putchar('*');
        putchar('\n');                       /*����*/
    }

    return (0);
}
