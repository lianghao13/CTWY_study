/*
    �����������Ԫ������Ϊ0
*/

#include <stdio.h>

/*---��0��ֵ��no��Ԫ�ص�����vc������Ԫ��---*/
void int_set(int vc[], int no) {
    int i;
    for (i = 0; i < no; i++)
        vc[i] = 0;
}

int main(void) {
    int i;
    int ary1[] = {1, 2, 3, 4, 5};
    int ary2[] = {3, 2, 1};
    
    int_set(ary1, 5);           /*��0��ֵ������ary1������Ԫ��*/
    int_set(ary2, 3);           /*��0��ֵ������ary2������Ԫ��*/

    for (i = 0; i < 5; i++) printf("ary1[%d] = %d\n", ary1[i]);
    for (i = 0; i < 3; i++) printf("ary2[%d] = %d\n", ary2[i]);

    return (0);
}
