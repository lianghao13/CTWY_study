/*
    ����Ӣ���������ѧ���������е���߷�
*/

#include <stdio.h>

#define NUMBER  5

/*---����Ԫ�ظ���Ϊno������vc�е����ֵ---*/
int max_of(int vc[], int no) {
    int i;
    int max = vc[0];
    for (i =1; i < no; i++)
        if (vc[i] < max)    max = vc[i];
    return (max);
}

int main(void) {
    int i;
    int eng[NUMBER];        /*Ӣ��ķ���*/
    int mat[NUMBER];        /*��ѧ�ķ���*/
    int max_e, max_m;       /*���Ƶ���߷�ֵ*/

    printf("������%d��ѧʿ�ķ�����\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("[%d]Ӣ�", i+1);  scanf("%d", &eng[i]);
        printf("    ��ѧ��", i+1);  scanf("%d", &mat[i]);
    }
    max_e = max_of(eng, NUMBER);
    max_m = max_of(mat, NUMBER);

    printf("Ӣ�����߷�=%d��\n", max_e);
    printf("��ѧ����߷�=%d��\n", max_m);

    return (0);
}
