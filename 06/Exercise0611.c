/*
    ����NUMBER��ѧ��COURSE����Ŀ�ķ�������ʾ��ÿ�Ƶ���ߵ÷ֺ�ÿ��ѧ����ƽ���ɼ�
*/

#include <stdio.h>

#define NUMBER 5                /*ѧ������*/   
#define COURSE 3                /*��Ŀ��*/

/*---��������ÿ�У���ÿ����Ŀ�������ֵ---*/
int max_Colum(const int ary[NUMBER][COURSE], int colum) {
    int i, max;
    max = ary[0][colum];
    for (i = 0; i < NUMBER; ++i) {
        max = (max > ary[i][colum]) ? max : ary[i][colum];
    }
    return(max);
}

/*---��������ÿ�У���ÿ��ѧ������ƽ���ɼ�---*/
double ave_Row(const int ary[NUMBER][COURSE], int row) {
    int j = 0;
    double ave = 0;
    int sum = 0;
    for ( ; j < COURSE; ++j) {
        sum += ary[row][j];
    }
    ave = (double)sum / COURSE;
    return(ave);
}

int main(void) {
    int i, j;
    int tensu[NUMBER][COURSE];             /*��ά���鱣��ѧ������Ӧ��Ŀ�ķ���*/
    int max[COURSE];                       /*������Ŀ������lang����ѧmath��Ӣ��eng������߷����±�Ϊ��ʶ������һά������*/
    double ave[NUMBER];                    /*ÿ��ѧ����ƽ���ɼ����������±��ʶ��һά������*/

    char const *str[COURSE] = { "����", "��ѧ", "Ӣ��" }, *p[COURSE];
    for (i = 0; i < COURSE; ++i) {
        p[i] = str[i];
    }

    puts("������ÿ��ѧ�����Ƶķ�����");
    for (i = 0; i < NUMBER; i++) {
        int c_scanf;
        printf("��%3d��ѧ��\n", i + 1);
        for (j = 0; j < COURSE; ++j) {
            printf(" %s�ɼ���", p[j]);   scanf("%d", &tensu[i][j]);
            while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
                ;
        }
    }

    puts("���Ƶ���߷�Ϊ��");
    puts("-----------------");
    for (j = 0; j < COURSE; ++j) {
        max[j] = max_Colum(tensu, j);
        printf(" %s ��%3d�֣�\n", p[j], max[j]);
    }
    puts("ÿ��ѧ����ƽ����Ϊ��");
    puts("-----------------");
    for (i = 0; i < NUMBER; i++) {
        ave[i] = ave_Row(tensu, i);
        printf("��%d��ѧ����%6.2lf�֣�\n", (i + 1), ave[i]);
    }

    return(0);
}
