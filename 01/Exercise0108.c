/*
    ��ʾ����ȡ�������������ĺ�
*/

#include <stdio.h>

int main(void){
    int n1,n2,n3;
    int sum;                                     //����ͱ���

    puts("����������������"); 
    printf("����1��");  scanf("%d",&n1);
    printf("����2��");  scanf("%d",&n2);
    printf("����3��");  scanf("%d",&n3);        //��ȡ���������ֵ

    sum = n1 + n2 + n3;

    printf("���ǵĺ���%d��\n",sum);              //��ʾ��
    
    return(0);
}
