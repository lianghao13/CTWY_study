/*
    ����Ӣ���������ѧ���������е���ͷ֣����޸Ĵ��������ԭʼֵ��
*/

#include <stdio.h>

#define NUMBER  5

/*---����Ԫ�ظ���Ϊno������vc�е���Сֵ��ʹ��const���η���ֹ�����޸Ĵ������飩---*/
int min_of(const int *vc, int no) {
    int i;
    int min = vc[0];
    for (i =1; i < no; i++)
        if (vc[i] < min)    min = vc[i];
    return (min);
}

int main(void) {
    int i;
    int eng[NUMBER];        /*Ӣ��ķ���*/
    int mat[NUMBER];        /*��ѧ�ķ���*/
    int min_e, min_m;       /*���Ƶ���߷�ֵ*/

    printf("������%d��ѧ���ķ�����\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        int c_scanf;
        printf("[%d]Ӣ�", i+1);      scanf("%d", &eng[i]);
        while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
            ;
        printf("   ��ѧ��");            scanf("%d", &mat[i]);
        while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
            ;
    }
    min_e = min_of(eng, NUMBER);
    min_m = min_of(mat, NUMBER);

    printf("Ӣ�����ͷ�=%d��\n", min_e);
    printf("��ѧ����ͷ�=%d��\n", min_m);

    return(0);
}
