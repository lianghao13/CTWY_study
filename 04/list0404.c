/*
    ���㲢��ʾ��1��5�ĺ�
*/

#include <stdio.h>

int main(void){
    int no =1;
    int sum = 0;

    do {
        sum = sum + no;
        no = no + 1;
    } while (no <= 5);

    printf("1��5�ĺϼ�ֵ��%d��\n", sum);

    return (0);
}
