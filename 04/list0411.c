/*
    ����涨��������������ʾ�����ǵĺϼ�ֵ��ƽ��ֵ
*/

#include <stdio.h>

int main(void){
    int i = 0;
    int sum = 0;
    int num, tmp;

    printf("Ҫ������ٸ�������");
    scanf("%d", &num);

    while (i < num) {
        printf("No.%d:", ++i);
        scanf("%d", &tmp);
        sum += tmp;
    }

    printf("�ϼ�ֵ��%d\n", sum);
    printf("ƽ��ֵ��%.2f\n", (double)sum / num);

    return (0);
}
