/*
    ������������������
*/

#include<stdio.h>

int main(void){
    int x1, x2; 

    puts("����������������");
    printf("����1��");  scanf("%d", &x1);
    printf("����2��");  scanf("%d", &x2);
    
    if (x1 == x2)
        puts("������ȡ�");
    else
        puts("���ǲ���ȡ�");
        
    return(0);
}
