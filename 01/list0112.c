/*
    ��ʾ����ȡ�������������ĺ�
*/

#include <stdio.h>

int main(void){
    int n1,n2;
    int wa;                                     //����ͱ���

    puts("����������������"); 
    printf("����1��");  scanf("%d",&n1);
    printf("����2��");  scanf("%d",&n2);        //��ȡ���������ֵ

    wa = n1 + n2;

    printf("���ǵĺ���%d��\n",wa);         //��ʾ��
    
    return(0);
}
