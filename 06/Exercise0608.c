/* 
    �������Ԫ�ص�ֵ���е�������
*/

#include <stdio.h>

#define NUMBER 4
/*---��no��Ԫ�ص�����vc���е�������---*/
void rev_intary(int vc[], int no) {
    int i, tmp;

    if (no % 2) {
       int count = (no - 1) / 2;
       for (i = 0; i < count; ++i) {
           tmp = vc[i];
           vc[i] = vc[no - 1 - i];
           vc[no - 1 - i] = tmp;
       }
    }
    else {
       int count = no / 2;
       for (i = 0; i < count; ++i) {
           tmp = vc[i];
           vc[i] = vc[no - 1 - i];
           vc[no - 1 - i] = tmp;
       }
    }
}

int main(void) {
    int i;
    int ary1[NUMBER];
    int ary2[NUMBER];
    
    printf("�����%d��Ԫ�ص����鸳����ֵ��\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        int c_scanf;
        printf("ary1[%d]:", i);       scanf("%d", &ary1[i]);
        while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
            ;
    }

    for (i = 0; i < NUMBER; ++i) {
        ary2[i] = ary1[i];
    }

    puts("�任ǰ�������Ԫ�ء�");
    for (i = 0; i < NUMBER; i++) printf("ary2[%d] = %d\n", i, ary2[i]);
    
    rev_intary(ary1, NUMBER);

    puts("�任��������Ԫ�ء�");
    for (i = 0; i < NUMBER; i++) printf("ary1[%d] = %d\n", i, ary1[i]);

    return(0);
}
