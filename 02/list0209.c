/*
    ��ȡ����������ֵ�����ø�������ʾ�����ǵ�ƽ��ֵ
*/

#include <stdio.h>

int main(void){
    int na,nb;

    puts("����������������");
    printf("����A:");  scanf("%d",&na);
    printf("����B:");  scanf("%d",&nb);

    printf("���ǵ�ƽ��ֵ��%f��\n", (na + nb) / 2.0);

    return(0);
}
