/*
    �����������������𣨵ڶ��棩
*/

#include<stdio.h>

int main(void){
    int x1, x2; 

    printf("����������������\n");
    printf("����1��");  scanf("%d", &x1);
    printf("����2��");  scanf("%d", &x2);
    
    if (x1 != x2)
        puts("���ǲ���ȡ�");
    else
        puts("������ȡ�");
        
    return(0);
}
