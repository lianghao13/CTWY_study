/*
    ��ȡ����������ֵ����ʾǰ���Ǻ��ߵİٷ�֮��
*/

#include <stdio.h>

int main(void){
    int na,nb;

    puts("����������������");
    printf("����A:");  scanf("%d",&na);
    printf("����B:");  scanf("%d",&nb);

    printf("A��B��%f%%��\n", (double)(na * 100) / nb);

    return(0);
}
