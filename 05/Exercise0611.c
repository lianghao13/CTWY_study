/*
    ����5��ѧ��3����Ŀ�ķ�������ʾ��ÿ�Ƶ���ߵ÷ֺ�ÿ��ѧ����ƽ���ɼ�
*/

#include <stdio.h>

#define NUMBER 5                /*ѧ������*/   
#define COURSE 3                /*��Ŀ��*/

/*---��������ÿ��(��ÿ����Ŀ)�����ֵ---*/
int max_Colum(const int ary[NUMBER][COURSE], int colum) {
    int i,max;
    max = ary[0][colum];
    for (i = 0; i < NUMBER; ++i) {
        max = (max > ary[i][colum]) ? max : ary[i][colum];
    }
}

int main(void) {
    int i;
    int snum = 0;                /*����ѧ������*/
    int tensu[NUMBER];           /*ѧ������*/
    int succs[NUMBER];           /*����ѧ��һ�������漰��ѧ���ġ��±ꡱ��*/

    puts("������ѧ���ķ�����");
    for (i = 0; i < NUMBER; i++) {
        printf("%2d�ţ�", i + 1);
        scanf("%d", &tensu[i]);
        if (tensu[i] >= 60)
            succs[snum++] = i;   /*��ӵ�����ѧ��һ������*/
    }

    puts("����ѧ��һ����");
    puts("--------------");
    for (i = 0; i < snum; i++)
        printf("%2d�ţ�%3d�֣�\n", succs[i]+1, tensu[succs[i]]);

    return (0);
}
