/*
    ���㲢��ʾ��1��5�ĺͣ�ʹ�ø��ϸ�ֵ������ͺ��õ����������
*/

#include <stdio.h>

int main(void){
    int no =1;
    int sum = 0;

    do {
        sum += no;          /*��sum��ֵ����no*/
        no++;               /*��no��ֵ�������ñ��ʽ��ֵΪ����ǰno��ֵ*/
    } while (no <= 5);

    printf("1��5�ĺϼ�ֵ��%d��\n", sum);

    return (0);
}
