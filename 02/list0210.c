/*
    ��ȡ����������ֵ������ʵ����ʾ�����ǵ�ƽ��ֵ������ת����
*/

#include <stdio.h>

int main(void){
    int na,nb;

    puts("����������������");
    printf("����A:");  scanf("%d",&na);
    printf("����B:");  scanf("%d",&nb);

    printf("���ǵ�ƽ��ֵ��%.4f��\n", (double)(na + nb) / 2);

    return(0);
}
