/*
    ������߷�
*/

#include <stdio.h>

#define NUMBER 5

static int tensu[NUMBER];

int top(void);

int main(void) {
    extern int tensu[];
    int i;

    printf("������%d��ѧ���ķ�����\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        int c_scanf;
        printf("%d:", i+1);     scanf("%d", &tensu[i]);
        while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
            ;
    }
 
    printf("��߷�=%d\n", top());
    
    return (0);
}

/*---��������tensu�����ֵ�������棩---*/
int top(void) {
    extern int tensu[];
    int i;
    int max = tensu[0];
    for (i = 0; i < NUMBER; i++) {
        if (tensu[i] > max)
            max = tensu[i];
    }
    return (max);
}
