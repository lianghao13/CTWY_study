/*
    ��ȡ����������ֵ����ʾ�����ǵ��̺�����
*/

#include <stdio.h>

int main(void){
    int na,nb;

    puts("����������������");
    printf("����A:");  scanf("%d",&na);
    printf("����B:");  scanf("%d",&nb);

    printf("A����B��%d��%d��\n", na / nb, na % nb);

    return(0);
}
