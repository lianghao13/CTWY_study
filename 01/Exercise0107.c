/*
    ��ʾ����ȡ�������������Ļ�
*/

#include <stdio.h>

int main(void){
    int n1,n2;
    int pr;                                     //���������

    puts("����������������"); 
    printf("����1��");  scanf("%d",&n1);
    printf("����2��");  scanf("%d",&n2);        //��ȡ���������ֵ

    pr = n1 * n2;

    printf("���ǵĻ���%d��\n",pr);              //��ʾ��
    
    return(0);
}
