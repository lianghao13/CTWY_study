/* 
    �������Ԫ�ص�ֵ���е�������
*/

#include <stdio.h>

#define NUMBER 4
/*---��no��Ԫ�ص�����v2���е������У������������������v1��---*/
void intary_rcpy(int v1[], const int *v2, int no) {
    int i, tmp;

    for (i = 0; i < no; ++i)    v1[i] = v2[i];

    if (no % 2) {
       int count = (no - 1) / 2;
       for (i = 0; i < count; ++i) {
           tmp = v1[i];
           v1[i] = v1[no - 1 - i];
           v1[no - 1 - i] = tmp;
       }
    }
    else {
       int count = no / 2;
       for (i = 0; i < count; ++i) {
           tmp = v1[i];
           v1[i] = v1[no - 1 - i];
           v1[no - 1 - i] = tmp;
       }
    }
}

int main(void) {
    int i;
    int ary1[NUMBER];
    int ary2[NUMBER];
    
    puts("������ʾ������ary2����ary1�У�����ary1�н��е������С�");
    printf("�����%d��Ԫ�ص�����ary2������ֵ��\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        int cln_buf;
        printf("ary2[%d]:", i);       scanf("%d", &ary2[i]);
        while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
            ;
    }

    intary_rcpy(ary1, ary2, NUMBER);

    puts("�任�������ary1��Ԫ�ء�");
    for (i = 0; i < NUMBER; i++) printf("ary1[%d] = %d\n", i, ary1[i]);

    puts("�任�������ary2��Ԫ�ء�");
    for (i = 0; i < NUMBER; i++) printf("ary2[%d] = %d\n", i, ary2[i]);

    return(0);
}
